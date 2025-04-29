/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:58:31 by mawada            #+#    #+#             */
/*   Updated: 2025/04/28 12:36:09 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void) {
    Fixed a;
    Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
    
    std::cout << a << std::endl;           // Ausgabe: 0
    std::cout << ++a << std::endl;         // Prä-Inkrement
    std::cout << a << std::endl;           // Ausgabe nach Inkrement
    std::cout << a++ << std::endl;         // Post-Inkrement
    std::cout << a << std::endl;           // Ausgabe nach Post-Inkrement
    std::cout << b << std::endl;           // Ausgabe von b
    std::cout << Fixed::max( a, b ) << std::endl;  // Ausgabe des größeren Werts
    

    // // Test der 4 arithmetischen Operatoren
    // Fixed c(10);  // Eine feste Zahl, um mit den Operatoren zu testen
    // Fixed d(2);
    
    // std::cout << "Addition (c + d): " << c + d << std::endl;   // Ausgabe: 12
    // std::cout << "Subtraction (c - d): " << c - d << std::endl; // Ausgabe: 8
    // std::cout << "Multiplication (c * d): " << c * d << std::endl; // Ausgabe: 20
    // std::cout << "Division (c / d): " << c / d << std::endl;   // Ausgabe: 5
    
    // // // Division durch 0 (dies sollte den Absturz verursachen)
    // // Fixed e(0);
    // // std::cout << "Division by 0 (c / e): " << c / e << std::endl;  // Erwarteter Absturz
    
    // Fixed f(5);
    // Fixed t(10);

    // // Teste min()
    // std::cout << "Min(f, t): " << Fixed::min(f, t) << std::endl;  // Erwartet 5

    // // Teste max()
    // std::cout << "Max(f, t): " << Fixed::max(f, t) << std::endl;  // Erwartet 10
    
    return 0;
}
