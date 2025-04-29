/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:38:14 by mawada            #+#    #+#             */
/*   Updated: 2025/04/25 15:10:55 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>  // Für roundf()

// Standardkonstruktor
Fixed::Fixed() : _value(0) {}

// Konstruktor für int-Wert
Fixed::Fixed(int const value) {
    _value = value << _fractionalBits;
}

// Konstruktor für float-Wert
Fixed::Fixed(float const value) {
    _value = roundf(value * (1 << _fractionalBits));
}

// Kopierkonstruktor
Fixed::Fixed(const Fixed& other) {
    *this = other;
}

// Zuweisungsoperator
Fixed& Fixed::operator=(const Fixed& rhs) {
    if (this != &rhs) {
        _value = rhs.getRawBits();
    }
    return *this;
}

// Destruktor
Fixed::~Fixed() {}

// Getter für den Rohwert
int Fixed::getRawBits(void) const {
    return _value;
}

// Setter für den Rohwert
void Fixed::setRawBits(int const raw) {
    _value = raw;
}

// Umwandlung zu float
float Fixed::toFloat(void) const {
    return static_cast<float>(_value) / (1 << _fractionalBits);
}

// Umwandlung zu int
int Fixed::toInt(void) const {
    return _value >> _fractionalBits;
}

// Vergleichsoperatoren
bool Fixed::operator>(const Fixed& rhs) const {
    return _value > rhs._value;
}

bool Fixed::operator<(const Fixed& rhs) const {
    return _value < rhs._value;
}

bool Fixed::operator>=(const Fixed& rhs) const {
    return _value >= rhs._value;
}

bool Fixed::operator<=(const Fixed& rhs) const {
    return _value <= rhs._value;
}

bool Fixed::operator==(const Fixed& rhs) const {
    return _value == rhs._value;
}

bool Fixed::operator!=(const Fixed& rhs) const {
    return _value != rhs._value;
}

// Arithmetische Operatoren
Fixed Fixed::operator+(const Fixed& rhs) const {
    Fixed result;
    result._value = _value + rhs._value;
    return result;
}

Fixed Fixed::operator-(const Fixed& rhs) const {
    Fixed result;
    result._value = _value - rhs._value;
    return result;
}

Fixed Fixed::operator*(const Fixed& rhs) const {
    Fixed result;
    result._value = (_value * rhs._value) >> _fractionalBits;
    return result;
}

Fixed Fixed::operator/(const Fixed& rhs) const {
    Fixed result;
    result._value = (_value << _fractionalBits) / rhs._value;
    return result;
}

// Inkrement-/Dekrementoperatoren
Fixed& Fixed::operator++() {
    _value++;
    return *this;
}

Fixed Fixed::operator++(int) {
    Fixed temp = *this;
    _value++;
    return temp;
}

Fixed& Fixed::operator--() {
    _value--;
    return *this;
}

Fixed Fixed::operator--(int) {
    Fixed temp = *this;
    _value--;
    return temp;
}

// Statische Funktionen
Fixed& Fixed::min(Fixed& a, Fixed& b) {
    return (a < b) ? a : b;
}

const Fixed& Fixed::min(const Fixed& a, const Fixed& b) {
    return (a < b) ? a : b;
}

Fixed& Fixed::max(Fixed& a, Fixed& b) {
    return (a > b) ? a : b;
}

const Fixed& Fixed::max(const Fixed& a, const Fixed& b) {
    return (a > b) ? a : b;
}

// Überladung des <<-Operators
std::ostream& operator<<(std::ostream& out, const Fixed& fixed) {
    out << fixed.toFloat();
    return out;
}
