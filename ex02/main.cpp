/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:57:46 by ekamada           #+#    #+#             */
/*   Updated: 2024/01/18 14:03:00 by emukamada        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void testForm(){

	try{
		AForm tmp("tmp", -100, -100, false);
	}
	catch (AForm::GradeTooHighException& e) {
		std::cerr << e.what() << std::endl;
	}
	catch (AForm::GradeTooLowException& e) {
		std::cerr << e.what() << std::endl;
	}
	// std::cout << tmp << std::endl;
}

void testBureaucrat(AForm& form){
	Bureaucrat a("Bureaucrat[a]", 151);
	Bureaucrat b("Bureaucrat[b]", 0);
	std::cout << a;
	std::cout << b;

	a.signForm(form);
	b.signForm(form);
}

int main(){

	// Bureaucrat a("Bureaucrat[a]", 150);
	// std::cout << std::endl;

	// Bureaucrat b;
	// std::cout << std::endl;
	testForm();
	AForm form;
	std::cout << form;
	testBureaucrat(form);
	return 0;
}
