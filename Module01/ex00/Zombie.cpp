/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:39:06 by mawada            #+#    #+#             */
/*   Updated: 2025/04/23 12:21:06 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name) {}

Zombie::~Zombie() {
    std::cout << name << " is being destroyed" << std::endl;
}

void Zombie::announce() const {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

// Zombie.cpp
// Implementiert die Methoden der Zombie-Klasse:
// - Konstruktor: setzt den Namen des Zombies.
// - Destruktor: gibt beim Löschen eine Nachricht aus.
// - announce(): lässt den Zombie seinen Satz sagen ("<name>: BraiiiiiiinnnzzzZ...")
