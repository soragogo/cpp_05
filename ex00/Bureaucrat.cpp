/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:57:39 by ekamada           #+#    #+#             */
/*   Updated: 2024/01/12 15:51:55 by emukamada        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(150){
	std::cout << "[Bureaucrat] Constructor called" <<std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) {
	std::cout << "[Bureaucrat] Constructor called" <<std::endl;
	try {
		setGrade(grade);
	} catch (const Bureaucrat::GradeTooHighExcepion& e) {
		std::cerr << "[Bureaucrat] " << e.what() << std::endl;
	} catch (const Bureaucrat::GradeTooLowExcepion& e) {
		std::cerr << "[Bureaucrat] " << e.what() << std::endl;
	}
}

Bureaucrat::~Bureaucrat(){
	std::cout << "[Bureaucrat] Destructor called" <<std::endl;

}

Bureaucrat::Bureaucrat(const Bureaucrat &brc) : name(brc.name), grade(brc.grade){
	std::cout << "[Bureaucrat] Copy constructor called" <<std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &brc){
	std::cout << "[Bureaucrat] Copy assignment operator called" <<std::endl;
	if (this != &brc)
		this->grade = brc.grade;
	return *this;
}

void Bureaucrat::setGrade(int grade){
	if (grade < 1){
		throw Bureaucrat::GradeTooHighExcepion();
	} else if (grade > 150) {
		throw Bureaucrat::GradeTooLowExcepion();
	}
	else
		this->grade = grade;
}

std::string Bureaucrat::getName() const{
	return name;
}

int Bureaucrat::getGrade() const{
	return grade;
}

const char *Bureaucrat::GradeTooHighExcepion::what() const throw(){
	return "Grade is too high";
}

const char *Bureaucrat::GradeTooLowExcepion::what() const throw(){
	return "Grade is too low";
}

void Bureaucrat::gradeUp(){
	try {
		setGrade(grade - 1);
	} catch (Bureaucrat::GradeTooHighExcepion& e) {
		std::cerr << "[Bureaucrat]" << e.what() << std::endl;
	}
}

void Bureaucrat::gradeDown(){
	try {
		setGrade(grade + 1);
	} catch (Bureaucrat::GradeTooLowExcepion& e) {
		std::cerr << "[Bureaucrat]" << e.what() << std::endl;
	}
}
