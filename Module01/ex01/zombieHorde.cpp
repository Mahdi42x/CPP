/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:26:08 by mawada            #+#    #+#             */
/*   Updated: 2025/04/23 18:17:01 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"  // Notwendig, um auf die Klasse Zombie und ihre Methoden zuzugreifen

Zombie* zombieHorde(int N, std::string name) {
    if (N <= 0)
        return NULL;  
    // Sicherheitsprüfung: Wenn die Anzahl <= 0 ist, geben wir NULL zurück
    // (man könnte alternativ auch nullptr schreiben)

    Zombie* horde = new Zombie[N];  
    // Dynamisch ein Array von N Zombies auf dem Heap erstellen
    // Jeder Zombie wird über den Standard-Konstruktor erstellt

    for (int i = 0; i < N; ++i) {
        horde[i].setName(name);  
        // Jedem Zombie im Array wird der übergebene Name zugewiesen
    }

    return horde;  
    // Rückgabe eines Zeigers auf das erste Element der Horde (also das Array)
}

