/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:58:31 by mawada            #+#    #+#             */
/*   Updated: 2025/04/28 12:32:17 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void) {
    Fixed a;          // Standardkonstruktor
    Fixed b(a);       // Kopierkonstruktor
    Fixed c;          // Standardkonstruktor

    // // Setzen des Raw Bits Werts
    // a.setRawBits(100); // Setzt einen bestimmten Wert mit dem Setter
    
    c = b;            // Zuweisungsoperator

    std::cout << a.getRawBits() << std::endl;  // Ruft den Getter auf
    std::cout << b.getRawBits() << std::endl;  // Ruft den Getter auf
    std::cout << c.getRawBits() << std::endl;  // Ruft den Getter auf

    return 0;
}
