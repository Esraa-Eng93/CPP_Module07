/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 13:10:17 by esraa             #+#    #+#             */
/*   Updated: 2025/10/11 15:06:25 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

# include <iostream>

template < typename T, typename F>
void iter(T *array, int len, F func)
{
	int i = 0;
	while ( i < len)
	{
		func(array[i]),
		i++;
	}
}

#endif
