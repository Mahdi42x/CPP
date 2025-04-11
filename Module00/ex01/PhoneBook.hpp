/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:04:52 by mawada            #+#    #+#             */
/*   Updated: 2025/04/10 14:47:01 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"  // weil die Klasse PhoneBook Contact verwendet

class PhoneBook
{
    private: //private: → Nur innerhalb der Klasse sichtbar.
		Contact contacts[8];  // Wir speichern max. 8 Kontakte
    	int contactCount;     // Wie viele Kontakte haben wir insgesamt?
    	int nextIndex;        // Wohin speichern wir den nächsten Kontakt?

    public: //public: → Von außen zugänglich (z. B. in main()).
		PhoneBook();				// Konstruktor – initialisiert Variablen
        void addContact();			// Kontakt hinzufügen
        void searchContacts() const;  	// Kontakte durchsuchen
};

#endif
