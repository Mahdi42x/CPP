/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:58:31 by mawada            #+#    #+#             */
/*   Updated: 2025/05/05 13:51:34 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() {
    const int size = 4;
    Animal* animals[size];

    std::cout << "\n=== Konstruktion ===" << std::endl;
    for (int i = 0; i < size; ++i) {
        if (i < size / 2)
            animals[i] = new Dog();
        else
            animals[i] = new Cat();
    }

    std::cout << "\n=== makeSound() Aufrufe ===" << std::endl;
    for (int i = 0; i < size; ++i)
        animals[i]->makeSound();

    std::cout << "\n=== Deep Copy Test ===" << std::endl;
    Dog original;
    original.getBrain()->setIdea(0, "Original denkt an Futter");

    Dog copy = original;
    copy.getBrain()->setIdea(0, "Kopie denkt an Ball");

    std::cout << "Original: " << original.getBrain()->getIdea(0) << std::endl;
    std::cout << "Kopie   : " << copy.getBrain()->getIdea(0) << std::endl;

    std::cout << "\n=== Destruktion ===" << std::endl;
    for (int i = 0; i < size; ++i)
        delete animals[i];

    return 0;
}
