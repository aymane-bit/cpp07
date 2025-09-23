/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 16:48:57 by aymane            #+#    #+#             */
/*   Updated: 2025/09/23 17:02:23 by aymane           ###   ########.fr       */
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
    // C.O.F
        Array();
        Array(unsigned int n);
        Array(const Array& original);
        Array& operator=(const Array& original);
        ~Array();
    // exeption class
        class OutOfBound : public std::exception
        {
            public :
                const char* what() const throw();
        };
    // index op
        T& operator[](size_t index);
    // mm fct
        size_t size() const; 
};


#include "Array.tpp"

#endif
