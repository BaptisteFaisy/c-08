/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 05:06:08 by bfaisy            #+#    #+#             */
/*   Updated: 2024/01/14 05:45:05 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <vector>

class ElementNotFoundException : public std::exception
{
public:
	const char* what() const throw()
	{
		return ("Element not found in container");
	}
};

template <typename T>
int easyfind(T a, int b)
{
	int i = 0;
	std::vector<int>::iterator it;
	it = a.begin();
	while (it != a.end()){
		if (*it == b)
			return (i);
		*it++; i++;}
	throw ElementNotFoundException();
}