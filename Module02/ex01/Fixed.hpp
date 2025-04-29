/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:38:03 by mawada            #+#    #+#             */
/*   Updated: 2025/04/28 11:31:49 by mawada           ###   ########.fr       */
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
    // Standardkonstruktor
    Fixed();

    // Konstruktor für einen int-Wert
    Fixed(int const value);

    // Konstruktor für einen float-Wert
    Fixed(float const value);

    // Kopierkonstruktor
    Fixed(const Fixed& other);

    // Zuweisungsoperator
    Fixed& operator=(const Fixed& rhs);

    // Destruktor
    ~Fixed();

    // Getter für den Rohwert
    int getRawBits(void) const;

    // Setter für den Rohwert
    void setRawBits(int const raw);

    // Umwandlung zu einem float-Wert
    float toFloat(void) const;

    // Umwandlung zu einem int-Wert
    int toInt(void) const;

};
    // Überladung des <<-Operators für die Ausgabe
    std::ostream& operator<<(std::ostream& out, const Fixed& fixed);

#endif


