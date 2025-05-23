/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 14:31:39 by mawada            #+#    #+#             */
/*   Updated: 2025/04/23 12:21:37 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void randomChump(std::string name) {
    Zombie z(name);     // Auf dem Stack
    z.announce();       // Gibt seinen Spruch aus
} // Zerstörung erfolgt automatisch hier

// randomChump.cpp
// Implementiert die Funktion `randomChump()`.
// Erstellt einen Zombie auf dem Stack und ruft sofort `announce()` auf.
// Der Zombie wird automatisch gelöscht, wenn die Funktion endet.
