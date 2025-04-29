/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:12:40 by mawada            #+#    #+#             */
/*   Updated: 2025/04/23 12:20:54 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>
#include <iostream>

class Zombie
{
private:
    std::string name;

public:
    Zombie(std::string name);   // Konstruktor
    ~Zombie();                  // Destruktor
    void announce() const;      // Gibt "NAME: BraiiiiiiinnnzzzZ..." aus
};

#endif

// Zombie.hpp
// Deklariert die Klasse `Zombie`.
// Jeder Zombie hat einen Namen (private) und kann sich mit `announce()` vorstellen.
// Enthält einen Konstruktor zur Initialisierung und einen Destruktor für die Aufräum-Ausgabe.




