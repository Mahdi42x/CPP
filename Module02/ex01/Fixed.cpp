/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:38:14 by mawada            #+#    #+#             */
/*   Updated: 2025/04/28 11:30:52 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath> // für roundf()

// Standardkonstruktor
Fixed::Fixed() : _value(0) {
    std::cout << "Default constructor called" << std::endl;
}

// Konstruktor für int
Fixed::Fixed(int const value) {
    std::cout << "Int constructor called" << std::endl;
    _value = value << _fractionalBits;
}

// Konstruktor für float
Fixed::Fixed(float const value) {
    std::cout << "Float constructor called" << std::endl;
    _value = roundf(value * (1 << _fractionalBits));
}

// Kopierkonstruktor
Fixed::Fixed(const Fixed& other) {
    std::cout << "Copy constructor called" << std::endl;
    *this = other;
}

// Copy Assignment Operator
Fixed& Fixed::operator=(const Fixed& rhs) {
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &rhs)
        _value = rhs.getRawBits();
    return *this;
}

// Destruktor
Fixed::~Fixed() {
    std::cout << "Destructor called" << std::endl;
}

// Getter
int Fixed::getRawBits(void) const {
    return _value;
}

// Setter
void Fixed::setRawBits(int const raw) {
    _value = raw;
}

// Umwandlung zu Float
float Fixed::toFloat(void) const {
    return static_cast<float>(_value) / (1 << _fractionalBits);
}

// Umwandlung zu Int
int Fixed::toInt(void) const {
    return _value >> _fractionalBits;
}

// Operator<< Überladung (kein friend nötig)
std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}
