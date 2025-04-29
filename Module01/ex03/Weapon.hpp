/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:40:45 by mawada            #+#    #+#             */
/*   Updated: 2025/04/23 18:43:58 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon {
private:
    std::string type;  // Waffentyp (z. B. "Sword", "Axe", etc.)

public:
    Weapon(const std::string& type);  // Konstruktor zum Setzen des Waffentyps
    const std::string& getType() const;  // Gibt den Waffentyp zurück
    void setType(const std::string& newType);  // Setzt den Waffentyp
};

#endif
