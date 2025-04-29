/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:52:34 by mawada            #+#    #+#             */
/*   Updated: 2025/04/29 13:04:19 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

// Konstruktor: Erstellt neuen ClapTrap mit Startwerten
ClapTrap::ClapTrap(const std::string& name)
	: _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " was born!" << std::endl;
}

// Copy-Konstruktor
ClapTrap::ClapTrap(const ClapTrap& other)
{
	*this = other;
}

// Zuweisungsoperator
ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	_name = other._name;
	_hitPoints = other._hitPoints;
	_energyPoints = other._energyPoints;
	_attackDamage = other._attackDamage;
	return *this;
}

// Destruktor
ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " died..." << std::endl;
}

// Angriff auf Ziel – kostet 1 Energiepunkt
void ClapTrap::attack(const std::string& target)
{
	if (_hitPoints <= 0)
		std::cout << "ClapTrap " << _name << " has no HP left to attack." << std::endl;
	else if (_energyPoints <= 0)
		std::cout << "ClapTrap " << _name << " has no energy left to attack." << std::endl;
	else
	{
		_energyPoints--;
		std::cout << "ClapTrap " << _name << " attacks " << target
		          << ", causing " << _attackDamage << " points of damage!" << std::endl;
	}
}

// Schaden nehmen – verringert Lebenspunkte
void ClapTrap::takeDamage(unsigned int amount)
{
	_hitPoints -= amount;
	if (_hitPoints < 0)
		_hitPoints = 0;
	std::cout << "ClapTrap " << _name << " takes " << amount << " damage." << std::endl;
}

// Reparieren – kostet 1 Energiepunkt, gibt Leben zurück
void ClapTrap::beRepaired(unsigned int amount)
{
	if (_hitPoints <= 0)
		std::cout << "ClapTrap " << _name << " can't repair with 0 HP." << std::endl;
	else if (_energyPoints <= 0)
		std::cout << "ClapTrap " << _name << " has no energy to repair." << std::endl;
	else
	{
		_energyPoints--;
		_hitPoints += amount;
		std::cout << "ClapTrap " << _name << " is repaired by " << amount << " HP." << std::endl;
	}
}

// Getter
std::string ClapTrap::getName() const { return _name; }
int ClapTrap::getHitPoints() const { return _hitPoints; }
int ClapTrap::getEnergyPoints() const { return _energyPoints; }
int ClapTrap::getAttackDamage() const { return _attackDamage; }

// Setter
void ClapTrap::setHitPoints(int amount) { _hitPoints = amount; }
void ClapTrap::setEnergyPoints(int amount) { _energyPoints = amount; }
void ClapTrap::setAttackDamage(int amount) { _attackDamage = amount; }

// Konsolenausgabe im Stil: ClapTrap Trappy | HP: 10 | EP: 5 | AD: 0
std::ostream& operator<<(std::ostream& os, const ClapTrap& clap)
{
	os << "ClapTrap " << clap.getName()
	   << " | HP: " << clap.getHitPoints()
	   << " | EP: " << clap.getEnergyPoints()
	   << " | AD: " << clap.getAttackDamage() << std::endl;
	return os;
}
