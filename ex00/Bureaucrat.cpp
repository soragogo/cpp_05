/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:57:39 by ekamada           #+#    #+#             */
/*   Updated: 2024/01/10 18:37:55 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(150){
	std::cout << "[Bureaucrat] Constructor called" <<std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name), grade(grade){
	std::cout << "[Bureaucrat] Constructor called" <<std::endl;
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
	{
		this->grade = brc.grade;
	}
	return *this;
}

std::string Bureaucrat::getName() const{
	return this->name;
}

int Bureaucrat::getGrade() const{
	return this->grade;
}


