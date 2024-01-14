/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bfaisy <bfaisy@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/14 05:05:56 by bfaisy            #+#    #+#             */
/*   Updated: 2024/01/14 05:45:02 by bfaisy           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main() {
    std::vector<int> monVecteur = {6, 2, 2, 4, 5};
    try
    {
        std::cout <<(easyfind(monVecteur, 2)) << std::endl;
    }
    catch (const ElementNotFoundException &e)
    {
        std::cerr << "Exception: " << e.what() << std::endl;
    }
}