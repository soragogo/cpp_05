/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:44:24 by emukamada         #+#    #+#             */
/*   Updated: 2024/01/20 10:14:08 by emukamada        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

        // ShrubberyCreationForm() : AForm("DefaultName", 137, 145, false) {}
        // ShrubberyCreationForm(std::string name) : AForm(name, 137, 145, false){}
        // ShrubberyCreationForm(const ShrubberyCreationForm& form) : AForm(form){}


// ShrubberyCreationForm::ShrubberyCreationForm(std::string name, const int grade_to_execute, const int grade_to_sign, bool is_signed)
// : name(name), grade_to_execute(grade_to_execute), grade_to_sign(grade_to_sign), is_signed(is_signed) {
// 	std::cout << "[ShrubberyCreationForm] Constructor called" <<std::endl;
//     if (grade_to_execute < 1 || grade_to_sign < 1) {
//         throw GradeTooHighException();
//     }
//     else if (grade_to_execute > 150 || grade_to_sign > 150) {
//         throw GradeTooLowException();
//     }
// }

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "[ShrubberyCreationForm] Destructor called" <<std::endl;

}

// ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &form) : name(form.name), grade_to_execute(form.grade_to_execute), grade_to_sign(form.grade_to_sign), is_signed(form.is_signed){
// 	std::cout << "[ShrubberyCreationForm] Copy constructor called" <<std::endl;
//     if (grade_to_execute < 1 || grade_to_sign < 1) {
//         throw GradeTooHighException();
//     }
//     else if (grade_to_execute > 150 || grade_to_sign > 150) {
//         throw GradeTooLowException();
//     }
// }

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& form) {
    if (this != &form) {
        AForm::operator=(form);
    }
    return *this;
}

std::ostream& operator<<(std::ostream& out, ShrubberyCreationForm& form) {
	out << form.getName() << ", ShrubberyCreationForm grade(execute) " << form.getGradeToExecute();
    out << ", grade(sign) " << form.getGradeToSign() << std::endl;
	return out;
}
