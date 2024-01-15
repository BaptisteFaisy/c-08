/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 05:48:16 by bfaisy            #+#    #+#             */
/*   Updated: 2024/01/15 03:58:39 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;


	Span as = Span(10);
	as.addNumber(6);
	std::vector<int> monVecteur = {5, 10};
	as.addNumber(monVecteur);
	std::cout << as.shortestSpan() << std::endl;
	std::cout << as.longestSpan() << std::endl;
	return 0;
}