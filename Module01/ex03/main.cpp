/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:24:01 by mawada            #+#    #+#             */
/*   Updated: 2025/04/24 12:42:44 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"
#include "HumanB.hpp"

int main() {
    {
        // Erstelle eine Waffe für Bob
        Weapon club("crude spiked club");

        // Bob benutzt die Waffe direkt im Konstruktor
        HumanA bob("Bob", club);
        bob.attack();  // Bob greift mit der ursprünglichen Waffe an

        // Ändere die Waffe
        club.setType("some other type of club");
        bob.attack();  // Bob greift erneut an, jetzt mit der geänderten Waffe
    }  // club wird hier zerstört, sobald der Block endet

    {
        // Erstelle eine Waffe für Jim
        Weapon club("crude spiked club");

        // Jim hat zu Beginn keine Waffe, aber wir setzen sie später
        HumanB jim("Jim");
        // jim.setWeapon(club);  // Waffe zu Jim hinzufügen
        jim.attack();  // Jim greift mit der Waffe an

        // Ändere die Waffe
        club.setType("some other type of club");
        jim.attack();  // Jim greift erneut an, jetzt mit der geänderten Waffe
    }  // club wird hier ebenfalls zerstört, sobald der Block endet

    return 0;
}
