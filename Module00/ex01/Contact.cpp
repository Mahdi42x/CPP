/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:55:35 by mawada            #+#    #+#             */
/*   Updated: 2025/04/10 15:39:37 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>
#include <iomanip> // für std::setw

// Hilfsfunktion zum Kürzen von langen Strings (für die Tabelle)
std::string formatField(const std::string& field) {
    if (field.length() > 10)
        return field.substr(0, 9) + ".";
    return field;
}

static std::string promptNonEmpty(const std::string& fieldName) {
    std::string input;
    do {
        std::cout << "Enter " << fieldName << ": ";
        std::getline(std::cin, input);
        if (input.empty()) {
            std::cout << fieldName << " cannot be empty!" << std::endl;
        }
    } while (input.empty());  // Wiederholen, solange es leer ist
    return input;
}


// Eingabe für einen neuen Kontakt
void Contact::setInfo() {
    firstName = promptNonEmpty("first name");
    lastName = promptNonEmpty("last name");
    nickname = promptNonEmpty("nickname");
    phoneNumber = promptNonEmpty("phone number");
    darkestSecret = promptNonEmpty("darkest secret");
}

// Zeigt eine Zeile mit Index + 3 Spalten (für die Suche)
void Contact::displaySummary(int index) const {
    std::cout << std::setw(10) << index << "|"
              << std::setw(10) << formatField(firstName) << "|"
              << std::setw(10) << formatField(lastName) << "|"
              << std::setw(10) << formatField(nickname) << std::endl;
}

// Zeigt alle Felder vollständig
void Contact::displayDetails() const {
    std::cout << "First Name:     " << firstName << std::endl;
    std::cout << "Last Name:      " << lastName << std::endl;
    std::cout << "Nickname:       " << nickname << std::endl;
    std::cout << "Phone Number:   " << phoneNumber << std::endl;
    std::cout << "Darkest Secret: " << darkestSecret << std::endl;
}
