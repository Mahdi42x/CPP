/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 11:52:24 by mawada            #+#    #+#             */
/*   Updated: 2025/04/29 15:27:53 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	protected:
		// Interne Werte des ClapTraps
		std::string _name;
		int _hitPoints;
		int _energyPoints;
		int _attackDamage;

	public:
		// Konstruktoren und Destruktor
		ClapTrap(const std::string& name);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		~ClapTrap();

		// Aktionen des ClapTraps
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		// Getter
		std::string getName() const;
		int getHitPoints() const;
		int getEnergyPoints() const;
		int getAttackDamage() const;

		// Setter
		void setHitPoints(int amount);
		void setEnergyPoints(int amount);
		void setAttackDamage(int amount);
};

// Überladung für << zur sauberen Konsolenausgabe
std::ostream& operator<<(std::ostream& os, const ClapTrap& clap);

#endif
