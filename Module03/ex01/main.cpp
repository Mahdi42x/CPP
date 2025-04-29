/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:58:31 by mawada            #+#    #+#             */
/*   Updated: 2025/04/29 15:33:36 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main(void)
{
    {
        ScavTrap a("Scavvy");
        a.guardGate(); // Zeigt direkt guardGate
        std::cout << a;

        // Energie leer machen
        for (int i = 0; i < 50; ++i)
            a.attack("Target");

        // Jetzt: Energie aufgebraucht
        a.attack("Target");

        std::cout << a;
        a.beRepaired(5);  // keine Energie -> sollte fehlschlagen
        a.attack("Target");
        std::cout << a;
    }

    std::cout << "\n---\n";

    {
        ScavTrap a("Scavvy");
        a.guardGate();
        std::cout << a;
        a.takeDamage(150);  // stirbt sofort
        std::cout << a;
        a.attack("Target"); // sollte sagen: kein HP
        a.beRepaired(5);    // sollte sagen: kein HP
        std::cout << a;
    }

    std::cout << "\n---\n";

    {
        ScavTrap a("Scavvy");
        ScavTrap b(a);
        ScavTrap c = a;

        a.takeDamage(10);   // nur a verliert HP
        b.attack("Enemy");  // b funktioniert unabhängig
        c.guardGate();      // c aktiviert Modus
        std::cout << a << b << c;
    }

    return 0;
}
