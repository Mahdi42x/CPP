/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:38:14 by mawada            #+#    #+#             */
/*   Updated: 2025/04/28 12:24:28 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

// Standardkonstruktor
Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Kopierkonstruktor
Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    _value = other.getRawBits();  // Hier wird getRawBits() verwendet
}

//Zuweisungsoperator
Fixed& Fixed::operator=(const Fixed& rhs) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs) {
        _value = rhs.getRawBits();  // Auch hier wird getRawBits() verwendet
    }
    return *this;
}



// Destruktor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

// Getter
int Fixed::getRawBits(void) const {
    std::cout << "getRawBits member function called" << std::endl;
    return _value;
}

// Setter
// Setter: Setzt den Rohwert (_value) des Objekts
void Fixed::setRawBits(int const raw) {
    _value = raw;
    std::cout << "setRawBits member function called" << std::endl;
}
