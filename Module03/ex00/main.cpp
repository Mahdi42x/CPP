/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:58:31 by mawada            #+#    #+#             */
/*   Updated: 2025/04/29 13:06:33 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	// Test 1: Energie wird durch Angriffe verbraucht
	{
		ClapTrap a("Trappy");
		std::cout << a;
		a.attack("Target");
		a.attack("Target");
		a.attack("Target");
		a.attack("Target");
		a.attack("Target");
		a.attack("Target");
		a.attack("Target");
		a.attack("Target"); // Energie sollte fast leer sein
		a.beRepaired(5);    // Reparatur kostet Energie
		std::cout << a;
		a.attack("Target"); // vielleicht kein Energie mehr
		a.attack("Target");
		a.beRepaired(5);    // keine Energie?
		std::cout << a;
	}

	std::cout << std::endl;

	// Test 2: Tod durch Schaden
	{
		ClapTrap a("Trappy");
		std::cout << a;
		a.takeDamage(15);  // Schaden größer als HP
		std::cout << a;
		a.attack("Target");    // Kein Angriff möglich
		a.beRepaired(5);       // Keine Reparatur möglich
		std::cout << a;
	}

	std::cout << std::endl;

	// Test 3: Kopierkonstruktor und -zuweisung
	{
		ClapTrap a("Trappy");
		ClapTrap b(a);      // Copy Constructor
		ClapTrap c = a;     // Copy Assignment
		std::cout << a << b << c;
	}
}


