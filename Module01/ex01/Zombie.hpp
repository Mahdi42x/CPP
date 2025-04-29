/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:25:15 by mawada            #+#    #+#             */
/*   Updated: 2025/04/23 18:16:36 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP
// Header-Guard: Verhindert, dass diese Datei mehrfach eingebunden wird
// (z. B. bei mehreren Includes im Projekt)

#include <string>  
// Wird für std::string benötigt (für den Namen des Zombies)

class Zombie {
private:
    std::string name;  
    // Der Name des Zombies (nur innerhalb der Klasse sichtbar)

public:
    Zombie();  
    // Konstruktor – wird automatisch aufgerufen, wenn ein Zombie-Objekt erstellt wird
    // Muss ohne Parameter sein, damit man ein Array von Zombies erstellen kann

    ~Zombie();  
    // Destruktor – wird automatisch aufgerufen, wenn ein Zombie-Objekt zerstört wird
    // Hier gibt er z. B. den Namen aus, der gelöscht wird (Debug-Ausgabe)

    void setName(std::string name);  
    // Funktion zum Setzen des Namens (z. B. beim Erstellen einer Zombie-Horde)

    void announce() const;  
    // Funktion, bei der der Zombie sich meldet: "NAME: BraiiiiiiinnnzzzZ..."
    // const → Die Funktion ändert keine Member-Variablen
};

#endif
// Ende des Header-Guards
