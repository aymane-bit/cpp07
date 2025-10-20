/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 21:18:54 by aymane            #+#    #+#             */
/*   Updated: 2025/10/20 11:25:04 by aymane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T>
void swap(T& val1, T& val2)
{
    T swap = val1;
    val1 = val2;
    val2 = swap;
}

template <typename T>
T  min(T val1, T val2)
{
    return (val1 < val2 ? val1 : val2);
}

template <typename T>
T  max(T val1, T val2)
{
    return (val1 > val2 ? val1 : val2);
}

#endif