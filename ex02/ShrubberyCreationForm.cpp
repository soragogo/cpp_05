/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:44:24 by emukamada         #+#    #+#             */
/*   Updated: 2024/01/18 20:00:17 by emukamada        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : name("ShrubberyCreationForm"), grade_to_execute(137), grade_to_sign(145), is_signed(false){

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name, const int grade_to_execute, const int grade_to_sign, bool is_signed)
: name(name), grade_to_execute(grade_to_execute), grade_to_sign(grade_to_sign), is_signed(is_signed) {
	std::cout << "[ShrubberyCreationForm] Constructor called" <<std::endl;
    if (grade_to_execute < 1 || grade_to_sign < 1) {
        throw GradeTooHighException();
    }
    else if (grade_to_execute > 150 || grade_to_sign > 150) {
        throw GradeTooLowException();
    }
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "[ShrubberyCreationForm] Destructor called" <<std::endl;

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form) : name(form.name), grade_to_execute(form.grade_to_execute), grade_to_sign(form.grade_to_sign), is_signed(form.is_signed){
	std::cout << "[ShrubberyCreationForm] Copy constructor called" <<std::endl;
    if (grade_to_execute < 1 || grade_to_sign < 1) {
        throw GradeTooHighException();
    }
    else if (grade_to_execute > 150 || grade_to_sign > 150) {
        throw GradeTooLowException();
    }
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &form){
	std::cout << "[ShrubberyCreationForm] Copy assignment operator called" <<std::endl;
	if (this != &form) {
        this->is_signed = form.is_signed;
    }
	return *this;
}
