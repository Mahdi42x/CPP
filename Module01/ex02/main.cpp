/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/23 12:24:01 by mawada            #+#    #+#             */
/*   Updated: 2025/04/23 18:39:00 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>     // Für die Verwendung von std::string
#include <iostream>   // Für Ein- und Ausgabe (std::cout, std::endl)

int main()
{    
    std::string myString = "HI THIS IS BRAIN";  
    // Eine normale String-Variable

    std::string* stringPTR = &myString;        
    // Pointer → speichert die Speicheradresse von myString

    std::string& stringREF = myString;         
    // Referenz → ein alternativer Name für myString (kein eigener Speicher)

    // Ausgabe der Speicheradressen
    std::cout << "Memory address of the string variable: " << &myString << std::endl;
    std::cout << "Memory address held by stringPTR:    " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF:    " << &stringREF << std::endl;

    std::cout << std::endl; // Leerzeile zur Übersicht

    // Ausgabe der tatsächlichen Werte
    std::cout << "Value of the string variable: " << myString << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

    return 0;
}
