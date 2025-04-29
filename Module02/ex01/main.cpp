/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:58:31 by mawada            #+#    #+#             */
/*   Updated: 2025/04/28 12:17:23 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

int main(void) {
    Fixed a;          // Standardkonstruktor
    Fixed const b( 10 );    // Konstruktor mit int
    Fixed const c( 42.42f ); // Konstruktor mit float
    Fixed const d( b );      // Kopierkonstruktor
    a = Fixed( 1234.4321f ); // Zuweisung mit einem float-Wert

    std::cout << "a is " << a << std::endl;
    std::cout << "b is " << b << std::endl;
    std::cout << "c is " << c << std::endl;
    std::cout << "d is " << d << std::endl;

    std::cout << "a is " << a.toInt() << " as integer" << std::endl;
    std::cout << "b is " << b.toInt() << " as integer" << std::endl;
    std::cout << "c is " << c.toInt() << " as integer" << std::endl;
    std::cout << "d is " << d.toInt() << " as integer" << std::endl;

    // std::cout << "a is " << a.toFloat() << " as float" << std::endl;
    // std::cout << "b is " << b.toFloat() << " as float" << std::endl;
    // std::cout << "c is " << c.toFloat() << " as float" << std::endl;
    // std::cout << "d is " << d.toFloat() << " as float" << std::endl;

    return 0;
}
