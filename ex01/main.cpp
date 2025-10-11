/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 14:10:36 by esraa             #+#    #+#             */
/*   Updated: 2025/10/11 15:06:21 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template<typename T >
void type_each_elements(const T &elements)
{
	std::cout << elements << " " << std::endl;
}

int main (void)
{
	int intelement[] = { 1, 2, 3, 4};
	const int constelements[] = { 5, 6, 7, 8};
	double double_elm[] = { 1.1, 2.2, 3.3, 4.4};
	char char_elm[] = { 'a', 'b', 'c', 'd'};

	std::cout << "---------------First test---------------------" << std::endl;
	::iter(intelement, 4, type_each_elements<int>);
	std::cout << std::endl;
	
	std::cout << "---------------Second test---------------------" << std::endl;
	::iter(constelements, 4, type_each_elements<const int>);
	std::cout << std::endl;

	std::cout << "---------------Third test---------------------" << std::endl;
	::iter(double_elm, 4, type_each_elements<double>);
	std::cout << std::endl;

	std::cout << "---------------fourth test---------------------" << std::endl;
	::iter(char_elm, 4, type_each_elements<char>);
	std::cout << std::endl;
	return 0;
}