/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 13:12:20 by mawada            #+#    #+#             */
/*   Updated: 2025/04/29 15:31:36 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

// Konstruktor: Startwerte für ScavTrap setzen
ScavTrap::ScavTrap(const std::string& name)
	: ClapTrap(name)
{
	_hitPoints = 100;
	_energyPoints = 50;
	_attackDamage = 20;
	std::cout << "ScavTrap " << _name << " enters the fight!" << std::endl;
}

// Copy-Konstruktor
ScavTrap::ScavTrap(const ScavTrap& other)
	: ClapTrap(other)
{
	std::cout << "ScavTrap " << _name << " copy constructed." << std::endl;
}

// Zuweisungsoperator
ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if (this != &other)
		ClapTrap::operator=(other);
	std::cout << "ScavTrap " << _name << " assigned." << std::endl;
	return *this;
}

// Destruktor
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << _name << " has left the battlefield..." << std::endl;
}

// Überschriebene Attacke
void ScavTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0)
		std::cout << "ScavTrap " << _name << " has no HP left to attack." << std::endl;
	else if (_energyPoints <= 0)
		std::cout << "ScavTrap " << _name << " has no energy left to attack." << std::endl;
	else
	{
		_energyPoints--;
		std::cout << "ScavTrap " << _name << " attacks " << target
		          << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
}

// Neue Methode: Wächtermodus aktivieren
void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << _name << " is now in Gate Keeper mode." << std::endl;
}
