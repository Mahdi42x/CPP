/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 13:29:06 by mawada            #+#    #+#             */
/*   Updated: 2025/04/23 18:15:25 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"      // Bindet die zugehörige Header-Datei ein (enthält die Klassendeklaration)
#include <iostream>         // Für Ein- und Ausgabe (std::cout wird verwendet)

// Konstruktor – wird beim Erstellen eines Zombie-Objekts automatisch aufgerufen
Zombie::Zombie() {}        // Macht aktuell nichts, könnte aber erweitert werden

// Destruktor – wird automatisch aufgerufen, wenn ein Zombie-Objekt zerstört wird
Zombie::~Zombie() {
    std::cout << name << " is being destroyed" << std::endl;  // Gibt aus, welcher Zombie gelöscht wird
}

// Setzt den Namen des Zombies (z. B. beim Erstellen einer Horde)
void Zombie::setName(std::string newName) {
    name = newName;
}

// Gibt eine Nachricht des Zombies aus – "Vorstellung"
void Zombie::announce() const {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;  // Zombie sagt seinen Satz
}
