/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 21:18:54 by aymane            #+#    #+#             */
/*   Updated: 2025/07/26 21:32:09 by aymane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T1, typename T2>
void swap(T1& val1, T2& val2)
{
    T1 swap = val1;
    val1 = val2;
    val2 = swap;
}

template <typename T1, typename T2>
T1  min(T1 val1, T2 val2)
{
    if (val1 == val2)
        return val2;
    if (val1 > val2)
        return val2;
    else
        return val1;
}

template <typename T1, typename T2>
T1  max(T1 val1, T2 val2)
{
    if (val1 == val2)
        return val2;
    if (val1 > val2)
        return val1;
    else
        return val2;
}

#endif