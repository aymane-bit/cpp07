/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 16:48:57 by aymane            #+#    #+#             */
/*   Updated: 2025/09/22 18:40:41 by aymane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>

template <typename T>
class Array
{
    private :
        T *array;
        size_t arr_size;

    public :
        Array();
        Array(unsigned int n);
        Array(const Array& original);
        Array& operator=(const Array& original);
        
};


#include "Array.tpp"

#endif
