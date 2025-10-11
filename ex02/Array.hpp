/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esraa <esraa@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/11 15:08:36 by esraa             #+#    #+#             */
/*   Updated: 2025/10/11 16:05:25 by esraa            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array
{
	private:
		T *arr;
		unsigned int size;
	public:
		Array()
		{
			arr = NULL;
			size = 0;
		}
		Array(unsigned int i)
		{
			size = i;
			arr = new T[size];
		}
		Array(const Array& cpy)
		{
			size = cpy.size;
			arr = new T[size];
			unsigned int i = 0;
			while (i < size)
			{
				arr[i] = cpy.arr[i];
				i++;
			}
		}
		Array& operator = (const Array& cpy)
		{
			if (this == &cpy)
				return (*this);
			if (this->arr != NULL)
				delete[] (arr);	
			size = cpy.size;
			arr = new T[size];
			unsigned int i = 0;
			while (i < size)
			{
				arr[i] = cpy.arr[i];
				i++;
			}
			return (*this);
		}
		~Array()
		{
			if (this->arr != NULL)
				delete[] (arr);	
		}

		class Out_of_range : public std::exception
		{
			virtual const char	*what() const throw()
			{
				return ("Index out range");
			}
		};

		unsigned int getsize() const
		{
			return (size);
		}

		T &operator[](unsigned int i)
		{
			if(i >= size)
			{
				throw Out_of_range();
				delete[] (arr);
			}
			return (arr[i]);
		}
};
#endif