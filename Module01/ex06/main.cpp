/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:17:30 by mawada            #+#    #+#             */
/*   Updated: 2025/04/24 14:17:45 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int main(int argc, char** argv) {
    if (argc != 2) {
        std::cerr << "Usage: ./harlFilter <level>" << std::endl;
        return 1;
    }

    std::string input = argv[1];
    std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int index = -1;

    for (int i = 0; i < 4; i++) {
        if (levels[i] == input) {
            index = i;
            break;
        }
    }

    Harl harl;

    switch (index) {
        case 0:
            std::cout << "[ DEBUG ]" << std::endl;
            harl.complain("DEBUG");
        case 1:
            std::cout << "[ INFO ]" << std::endl;
            harl.complain("INFO");
        case 2:
            std::cout << "[ WARNING ]" << std::endl;
            harl.complain("WARNING");
        case 3:
            std::cout << "[ ERROR ]" << std::endl;
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }

    return 0;
}
