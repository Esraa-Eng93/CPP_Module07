/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 15:08:29 by esraa             #+#    #+#             */
/*   Updated: 2025/10/11 16:43:26 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int main()
{
	std::cout << "---------------test---------------------" << std::endl;
	try
	{
		Array<int> empty;
		Array<int> intarr(4);
		unsigned int i = 0;
		while (i < intarr.getsize())
		{
			intarr[i] = i + 5;
			i++;
		}
		
		Array<int> IntArrCpy = intarr;
		IntArrCpy[1] = 100;

		i = 0;
		std::cout << " original class " << std::endl;
		while ( i < intarr.getsize())
		{
			std::cout << intarr[i] << std::endl;
			i++;
		}
		i = 0;
		std::cout << " cpy class " << std::endl;
		while ( i < IntArrCpy.getsize())
		{
			std::cout << IntArrCpy[i] << std::endl;
			i++;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	std::cout << "---------------test---------------------" << std::endl;
	try
	{
		Array<int> empty;
		Array<int> intarr(4);
		unsigned int i = 0;
		while (i < intarr.getsize())
		{
			intarr[i] = i + 5;
			i++;
		}
		
		Array<int> IntArrCpy = intarr;
		IntArrCpy[1] = 100;

		std::cout << "empty class \n" << empty[i] << std::endl;

		i = 0;
		std::cout << " original class " << std::endl;
		while ( i < intarr.getsize())
		{
			std::cout << intarr[i] << std::endl;
			i++;
		}
		i = 0;
		std::cout << " cpy class " << std::endl;
		while ( i < IntArrCpy.getsize())
		{
			std::cout << IntArrCpy[i] << std::endl;
			i++;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	return 0;
}