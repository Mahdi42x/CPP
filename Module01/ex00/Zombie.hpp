/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:12:40 by mawada            #+#    #+#             */
/*   Updated: 2025/04/11 14:38:59 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
private:
    std::string name;

public:
    Zombie(std::string name);   // Konstruktor
    ~Zombie();                  // Destruktor
    void announce() const;      // Gibt "NAME: BraiiiiiiinnnzzzZ..." aus
};

#endif



