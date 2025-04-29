/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:38:03 by mawada            #+#    #+#             */
/*   Updated: 2025/04/28 11:40:37 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed {
private:
    int _value;
    static const int _fractionalBits = 8;

public:
    // Konstruktoren
    Fixed();
    Fixed(int const value);
    Fixed(float const value);
    Fixed(const Fixed& other);

    // Zuweisungsoperator
    Fixed& operator=(const Fixed& rhs);

    // Destruktor
    ~Fixed();

    // Getter und Setter
    int getRawBits(void) const;
    void setRawBits(int const raw);

    // Umwandlungsfunktionen
    float toFloat(void) const;
    int toInt(void) const;

    // Vergleichsoperatoren
    bool operator>(const Fixed& rhs) const;
    bool operator<(const Fixed& rhs) const;
    bool operator>=(const Fixed& rhs) const;
    bool operator<=(const Fixed& rhs) const;
    bool operator==(const Fixed& rhs) const;
    bool operator!=(const Fixed& rhs) const;

    // Arithmetische Operatoren
    Fixed operator+(const Fixed& rhs) const;
    Fixed operator-(const Fixed& rhs) const;
    Fixed operator*(const Fixed& rhs) const;
    Fixed operator/(const Fixed& rhs) const;

    // Inkrement- und Dekrementoperatoren
    Fixed& operator++();    // Prä-Inkrement
    Fixed operator++(int);  // Post-Inkrement
    Fixed& operator--();    // Prä-Dekrement
    Fixed operator--(int);  // Post-Dekrement

    // Statische Funktionen
    static Fixed& min(Fixed& a, Fixed& b);
    static const Fixed& min(const Fixed& a, const Fixed& b);
    static Fixed& max(Fixed& a, Fixed& b);
    static const Fixed& max(const Fixed& a, const Fixed& b);
};

// << Operator außerhalb der Klasse
std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif
