/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:41:14 by mawada            #+#    #+#             */
/*   Updated: 2025/04/23 18:44:22 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"  // Weapon ist in HumanA notwendig

class HumanA {
private:
    std::string name;  // Name der Person
    Weapon& weapon;  // Referenz auf Weapon (keine Kopie, sondern echte Waffe)

public:
    HumanA(const std::string& name, Weapon& weapon);  // Konstruktor
    void attack() const;  // Gibt aus, was die Person mit der Waffe tut
};

#endif
