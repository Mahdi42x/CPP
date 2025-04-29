/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:08:16 by mawada            #+#    #+#             */
/*   Updated: 2025/04/23 12:22:53 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

// Diese Funktionen kommen aus anderen .cpp-Dateien:
Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main() {
    // Zombie auf dem Heap dynamisch
    Zombie* heapZombie = newZombie("HeapZ");
    heapZombie->announce();
    delete heapZombie;  // Speicher freigeben
    
    
    // Zombie auf dem Stack obendrauf(fest)
    randomChump("StackZ");
    randomChump("Mahdi");


    return 0;
}

// main.cpp
// Startpunkt des Programms.
// Demonstriert den Unterschied zwischen Stack- und Heap-Allocation:
//
// - Mit `newZombie("HeapZ")` wird ein Zombie im Heap erstellt (dynamisch).
//   Der zurückgegebene Zeiger wird verwendet, um `announce()` aufzurufen.
//   Anschließend wird `delete` verwendet, um den Speicher manuell freizugeben.
//
// - Mit `randomChump("StackZ")` wird ein Zombie auf dem Stack erstellt (automatisch).
//   Dieser Zombie ruft sofort `announce()` auf.
//   Er wird automatisch gelöscht, sobald die Funktion endet (Destruktor wird aufgerufen).

