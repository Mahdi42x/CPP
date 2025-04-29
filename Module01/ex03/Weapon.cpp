/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:40:58 by mawada            #+#    #+#             */
/*   Updated: 2025/04/23 18:44:14 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(const std::string& type) : type(type) {}  // Initialisierung des Waffentyps

const std::string& Weapon::getType() const {
    return type;  // Gibt den Typ der Waffe zurück
}

void Weapon::setType(const std::string& newType) {
    type = newType;  // Setzt den Typ der Waffe
}
