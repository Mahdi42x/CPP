/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 18:41:43 by mawada            #+#    #+#             */
/*   Updated: 2025/04/23 18:44:36 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"  // Weapon ist in HumanB notwendig

class HumanB {
private:
    std::string name;  // Name der Person
    Weapon* weapon;  // Zeiger auf Weapon (Weapon kann NULL sein)

public:
    HumanB(const std::string& name);  // Konstruktor ohne Waffe
    void setWeapon(Weapon& weapon);  // Setzt die Waffe später
    void attack() const;  // Gibt aus, was die Person mit der Waffe tut
};

#endif
