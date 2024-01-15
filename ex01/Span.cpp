/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 05:48:30 by bfaisy            #+#    #+#             */
/*   Updated: 2024/01/15 04:03:17 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(int n)
{
	_size = n;
}
Span::~Span(){}

Span::Span(const Span& other) : _v(other._v), _size(other._size){}

Span& Span::operator=(const Span& other)
{
	_v = other._v;
	_size = other._size;
	return *this;
}
const char* Span::Error::what() const throw() {std::cout << "Error\n"; return 0;}
void Span::addNumber(int x)
{
	if (_v.size() < _size)
		_v.push_back(x);
	else
		throw Error();
}

void Span::addNumber(std::vector<int>	vector){
	if (vector.size() + _v.size() <= _size)
	{
		_v.insert(_v.end(), vector.begin(), vector.end());
	}
	else
		throw Error();
}

int Span::shortestSpan()
{
	if (_v.size() < 2)
        throw std::exception();
	else
	{
		int distanceMinimale = std::numeric_limits<int>::max();

    	for (size_t i = 1; i < _v.size(); ++i) {
        	int distanceActuelle = std::abs(_v[i] - _v[i - 1]);
       	 	distanceMinimale = std::min(distanceMinimale, distanceActuelle);
    }

    return distanceMinimale;
	}
	
}
int Span::longestSpan(){
	if (_v.size() < 2)
        throw std::exception();
	else
		return ( *std::max_element( _v.begin(), _v.end() ) - *std::min_element( _v.begin(), _v.end() ) );
}