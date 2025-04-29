/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:41:52 by mawada            #+#    #+#             */
/*   Updated: 2025/04/23 18:45:33 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(const std::string& name) : name(name), weapon(NULL) {}

void HumanB::setWeapon(Weapon& weapon) {
    this->weapon = &weapon;  // Setzt die Waffe
}

void HumanB::attack() const {
    if (weapon) {  // Nur angreifen, wenn eine Waffe zugewiesen wurde
        std::cout << name << " attacks with their " << weapon->getType() << std::endl;
    } else {
        std::cout << name << " has no weapon!" << std::endl;
    }
}
