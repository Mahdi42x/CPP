/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/24 14:58:31 by mawada            #+#    #+#             */
/*   Updated: 2025/05/09 13:28:05 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
	try {
		std::cout << "--- Test Constructor (Valid) ---" << std::endl;
		Bureaucrat Hermione("Hermione", 42);
		std::cout << Hermione << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		std::cout << "--- Test Constructor (Valid) ---" << std::endl;
		Bureaucrat Harry("Harry", 3);
		std::cout << Harry << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		std::cout << "--- Test Constructor Too Low (151) ---" << std::endl;
		Bureaucrat Ron("Ron", 151);
		std::cout << Ron << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		std::cout << "--- Test Constructor Too High (0) ---" << std::endl;
		Bureaucrat Dobby("Dobby", 0);
		std::cout << Dobby << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		std::cout << "--- Test Increment Grade (Valid) ---" << std::endl;
		Bureaucrat Luna("Luna", 5);
		std::cout << Luna << std::endl;
		Luna.incrementGrade();
		std::cout << Luna << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		std::cout << "--- Test Increment Grade Too High (from 1) ---" << std::endl;
		Bureaucrat Dumbledore("Dumbledore", 1);
		std::cout << Dumbledore << std::endl;
		Dumbledore.incrementGrade(); // Should throw
		std::cout << Dumbledore << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		std::cout << "--- Test Decrement Grade (Valid) ---" << std::endl;
		Bureaucrat Rubeus("Rubeus", 5);
		std::cout << Rubeus << std::endl;
		Rubeus.decrementGrade();
		std::cout << Rubeus << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		std::cout << "--- Test Decrement Grade Too Low (from 150) ---" << std::endl;
		Bureaucrat Draco("Draco", 150);
		std::cout << Draco << std::endl;
		Draco.decrementGrade(); // Should throw
		std::cout << Draco << std::endl;
	} catch (const std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	return 0;
}
