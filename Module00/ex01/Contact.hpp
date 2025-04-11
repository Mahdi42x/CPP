/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 12:04:37 by mawada            #+#    #+#             */
/*   Updated: 2025/04/10 14:45:06 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <string>

class Contact {
	private:
		std::string firstName;
		std::string lastName;
		std::string nickname;
		std::string phoneNumber;
		std::string darkestSecret;

    public:
		void setInfo();                     // Eingabe aller Felder
    	void displaySummary(int index) const; // Zeigt Index + Name für Übersicht
    	void displayDetails() const;       // Zeigt alle Felder ausführlich
};

#endif
