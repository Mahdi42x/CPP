/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:31:22 by mawada            #+#    #+#             */
/*   Updated: 2025/04/23 12:21:22 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
    return new Zombie(name);
}

// newZombie.cpp
// Implementiert die Funktion `newZombie()`.
// Erstellt einen neuen Zombie auf dem Heap mit `new` und gibt einen Zeiger darauf zurück.
// Der Benutzer muss später selbst `delete` aufrufen.
