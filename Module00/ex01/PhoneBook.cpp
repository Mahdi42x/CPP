/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 11:55:39 by mawada            #+#    #+#             */
/*   Updated: 2025/04/11 15:19:05 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include <iostream>
#include <iomanip>  // für std::setw
#include <limits>   // für std::numeric_limits
#include <cstdlib> // für atoi()



// Konstruktor – wird beim Start automatisch aufgerufen
PhoneBook::PhoneBook() {
    contactCount = 0;
    nextIndex = 0;
}

// Kontakt hinzufügen
void PhoneBook::addContact() {
    contacts[nextIndex].setInfo();

    // Index vorrücken (Zirkular)
    nextIndex = (nextIndex + 1) % 8;

    // Kontaktzähler nur bis max. 8 erhöhen
    if (contactCount < 8)
        contactCount++;
}

// Kontakte anzeigen + Auswahl
void PhoneBook::searchContacts() const {
    if (contactCount == 0) {
        std::cout << "No contacts available." << std::endl;
        return;
    }

    std::cout << std::setw(10) << "Index" << "|"
              << std::setw(10) << "First Name" << "|"
              << std::setw(10) << "Last Name" << "|"
              << std::setw(10) << "Nickname" << std::endl;

          for (int i = 0; i < contactCount; ++i) {
            int index = (nextIndex - contactCount + i + 8) % 8;
            contacts[index].displaySummary(i);
        }
            
            

        std::string input;
        std::cout << "Enter index to view details: ";
        std::getline(std::cin, input);
            
        if (input.empty() || input.find_first_not_of("0123456789") != std::string::npos) {
            std::cout << "Invalid input. Index must be a number." << std::endl;
            return;
        }
        
        int index = std::atoi(input.c_str());
        if (index < 0 || index >= contactCount) {
            std::cout << "Invalid index. Out of range." << std::endl;
            return;
        }
        
        int realIndex = (nextIndex - contactCount + index + 8) % 8;
        contacts[realIndex].displayDetails();
        
}
