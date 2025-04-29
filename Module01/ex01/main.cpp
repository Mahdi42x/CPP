/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:24:01 by mawada            #+#    #+#             */
/*   Updated: 2025/04/23 18:11:10 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"  
// Bindet die Header-Datei ein, wo die Klasse Zombie deklariert ist

Zombie* zombieHorde(int N, std::string name);  
// Deklaration einer Funktion, die ein Array (Horde) von Zombies erstellt

int main() {
    int count = 4;  
    // Anzahl der Zombies in der Horde

    Zombie* horde = zombieHorde(count, "Horde");  
    // Erstellt ein dynamisches Array von Zombies mit dem Namen "Horde"
    // Gibt einen Zeiger auf den ersten Zombie im Array zurück

    for (int i = 0; i < count; ++i) {
        horde[i].announce();  
        // Jeder Zombie in der Horde stellt sich vor
    }

    delete[] horde;  
    // ❗ Wichtig: Wenn du ein dynamisches Array mit `new[]` erstellt hast,
    // musst du es mit `delete[]` wieder freigeben, um Speicherlecks zu vermeiden

    return 0;  
    // Ende des Programms
}
