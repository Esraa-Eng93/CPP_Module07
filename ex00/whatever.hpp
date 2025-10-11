/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 13:10:17 by esraa             #+#    #+#             */
/*   Updated: 2025/10/11 13:54:57 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

# include <iostream>

template < typename type>
void swap (type &x, type &y)
{
	type tmp;
	tmp = x;
	x = y;
	y = tmp;
}
template < typename type >
type  const &min(type const &x, type const &y) //for  const int x can handle it
{
	return ((x < y) ? x : y);
}
template < typename type >
type const &max(type const &x, type const &y)
{
	return ((x > y) ? x : y);
}

#endif
