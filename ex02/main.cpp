/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 16:38:37 by aymane            #+#    #+#             */
/*   Updated: 2025/09/23 17:00:39 by aymane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750

int main()
{
    std::cout << "=== Default constructor ===\n";
    Array<int> empty;
    std::cout << "Empty array size: " << empty.size() << "\n\n";

    std::cout << "=== Constructor with size ===\n";
    Array<int> numbers(5);
    for (size_t i = 0; i < numbers.size(); i++)
        numbers[i] = i * 10;

    std::cout << "Numbers array: ";
    for (size_t i = 0; i < numbers.size(); i++)
        std::cout << numbers[i] << " ";
    std::cout << "\n\n";

    std::cout << "=== Copy constructor ===\n";
    Array<int> copy(numbers);
    std::cout << "Copy array: ";
    for (size_t i = 0; i < copy.size(); i++)
        std::cout << copy[i] << " ";
    std::cout << "\n\n";

    std::cout << "=== Assignment operator ===\n";
    Array<int> assign;
    assign = numbers;
    std::cout << "Assigned array: ";
    for (size_t i = 0; i < assign.size(); i++)
        std::cout << assign[i] << " ";
    std::cout << "\n\n";

    std::cout << "=== Exception test ===\n";
    try {
        std::cout << numbers[10] << "\n"; // Out of bounds
    }
    catch (const std::exception& e) {
        std::cerr << "Caught exception: " << e.what() << "\n";
    }

    std::cout << "\n=== Modify original after copy ===\n";
    numbers[0] = 999;
    std::cout << "Original numbers[0]: " << numbers[0] << "\n";
    std::cout << "Copy numbers[0]: " << copy[0] << "\n";

    return 0;
}