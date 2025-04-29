/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:58:31 by mawada            #+#    #+#             */
/*   Updated: 2025/04/29 15:39:26 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	{
		FragTrap frag("Fraggy");
		std::cout << frag;
		int i = 0;
		while (i < 99)
		{
			frag.attack("Target");
			i++;
		}
		std::cout << frag;
		frag.beRepaired(5);
		frag.beRepaired(5);
		frag.attack("Target");
		std::cout << frag;
	}
	std::cout << std::endl;
	{
		FragTrap frag("Fraggy");
		std::cout << frag;
		frag.takeDamage(150);
		std::cout << frag;
		frag.attack("Target");
		frag.beRepaired(5);
		std::cout << frag;
	}
	std::cout << std::endl;
	{
		FragTrap a("Fraggy");
		FragTrap b(a);
		FragTrap c = a;
		a.highFivesGuys();
		b.highFivesGuys();
		c.highFivesGuys();
		std::cout << a << b << c;
	}
	return 0;
}
