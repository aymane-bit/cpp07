/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 16:58:37 by aymane            #+#    #+#             */
/*   Updated: 2025/09/23 17:02:34 by aymane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"

template <typename T>
Array<T>::Array() : array(NULL), arr_size(0)
{
    std::cout << "Array Constructor is called, Creates an empty array\n";
}

template <typename T>
Array<T>::Array(unsigned int n) : array(new T[n]), arr_size(n)
{
    std::cout << "Array Constructor is called, Creates an array with unsigned int\n";
}

template <typename T>
Array<T>::Array(const Array& original)
{
    this->arr_size = original.arr_size;
    this->array = new T[this->arr_size];

    for (size_t i = 0; i < arr_size; i++)
        this->array[i] = original.array[i];

    std::cout << "Array Copy Constructor is called\n";
}

template <typename T>
Array<T>& Array<T>::operator=(const Array& original)
{
    if (this == &original)
        return *this;
    delete[] this->array;

    this->arr_size = original.arr_size;
    this->array = new T[this->arr_size];

    for (size_t i = 0; i < arr_size; i++)
        this->array[i] = original.array[i];

    std::cout << "Array Assignement Operator is called\n";
    
    return *this;
}

template <typename T>
Array<T>::~Array()
{
    delete[] array;
    std::cout << "Array Destructor is called\n";
}

template <typename T>
const char* Array<T>::OutOfBound::what() const throw()
{
    return "Index out of bounds!";
}

template <typename T>
T& Array<T>::operator[](size_t index)
{
    if (index >= arr_size)
        throw OutOfBound();
    return array[index];
}

template <typename T>
size_t Array<T>::size() const
{
    return arr_size;
}

