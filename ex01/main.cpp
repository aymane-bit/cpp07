/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aymane <aymane@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/26 21:34:22 by aymane            #+#    #+#             */
/*   Updated: 2025/09/22 16:35:55 by aymane           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "iter.hpp"

int main()
{
    int numbers[5] = {1, 2, 3, 4, 5};
    std::string words[3] = {"hello", "treize", "cpp"};

    iter(numbers, 5, printElem<int>);
    iter(words, 3, printElem<std::string>);

    return 0;    
}