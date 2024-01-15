/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 05:48:32 by bfaisy            #+#    #+#             */
/*   Updated: 2024/01/15 03:55:08 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>
#include <vector>
#include <iostream>
#include <list>
#include <algorithm>
#include <limits>


class Span{
public :
	Span(int n);
	~Span();
	Span(const Span& other);
	Span& operator=(const Span& other);
	void addNumber(int x);
	void addNumber(std::vector<int>	vector);
	int shortestSpan();
	int longestSpan();

	class Error : public std::exception
	{
		public :
			const char* what() const throw();
	};
private:
	std::vector<int>	_v;
	unsigned int		_size;
};