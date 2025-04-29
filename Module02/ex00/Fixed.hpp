/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:38:03 by mawada            #+#    #+#             */
/*   Updated: 2025/04/25 14:43:14 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

class Fixed {
private:
    int _value;  // Der Wert, der den Festkomma-Wert speichert (der Rohwert, einschließlich Ganzzahl und Dezimalteil)
    static const int _fractionalBits = 8;  // Die Anzahl der Bits, die für den Dezimalteil verwendet werden (gibt die Präzision an)

public:
    Fixed();  // Standardkonstruktor: Initialisiert _value auf 0

    Fixed(const Fixed& other);  // Kopierkonstruktor: Erstellt eine Kopie eines bestehenden Fixed-Objekts

    Fixed& operator=(const Fixed& rhs);  // Zuweisungsoperator: Weist den Wert eines anderen Fixed-Objekts zu

    ~Fixed();  // Destruktor: Wird aufgerufen, wenn das Objekt zerstört wird (keine speziellen Ressourcen zum Freigeben in diesem Fall)

    int getRawBits(void) const;  // Getter: Gibt den Rohwert (_value) des Objekts zurück

    void setRawBits(int const raw);  // Setter: Setzt den Rohwert (_value) des Objekts
};

#endif

