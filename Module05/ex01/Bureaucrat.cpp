/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawada <mawada@student.42berlin.de>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/09 13:17:15 by mawada            #+#    #+#             */
/*   Updated: 2025/05/09 13:17:18 by mawada           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string& name, int grade) : name_(name) {
    if (grade < 1)
        throw GradeTooHighException();
    if (grade > 150)
        throw GradeTooLowException();
    grade_ = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& other) : name_(other.name_), grade_(other.grade_) {}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& other) {
    if (this != &other)
        grade_ = other.grade_; // name_ ist const
    return *this;
}

Bureaucrat::~Bureaucrat() {}

const std::string& Bureaucrat::getName() const {
    return name_;
}

int Bureaucrat::getGrade() const {
    return grade_;
}

void Bureaucrat::incrementGrade() {
    if (grade_ <= 1)
        throw GradeTooHighException();
    grade_--;
}

void Bureaucrat::decrementGrade() {
    if (grade_ >= 150)
        throw GradeTooLowException();
    grade_++;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return "Grade too high!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return "Grade too low!";
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& b) {
    os << b.getName() << ", bureaucrat grade " << b.getGrade() << ".";
    return os;
}
