/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/15 04:13:57 by bfaisy            #+#    #+#             */
/*   Updated: 2024/01/15 23:12:40 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <algorithm>
#include <list>
#include <stack>
#include <deque>

template <typename T, class Container = std::deque< T > >

class MutantStack : public std::stack< T, Container >
{
private :
	
public :
	MutantStack(){};
	MutantStack(const MutantStack& other){ *this = other;}
	MutantStack& operator=(const MutantStack& other){
		std::stack< T, Container >::operator=( other );
		return *this;
	}
	~MutantStack(){};
	typedef typename Container::iterator    iterator;
	using std::stack<T, std::deque<T>>::c;
    iterator begin() {
        return iterator(c.begin());
    }
    iterator end() {
        return iterator(c.end());
    }
};