/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:57:46 by ekamada           #+#    #+#             */
/*   Updated: 2024/01/12 15:47:41 by emukamada        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
	Bureaucrat a("Bureaucrat[a]", 150);
	std::cout << std::endl;

	Bureaucrat b;
	std::cout << std::endl;

	Bureaucrat c("Bureaucrat[c]", 1);
	std::cout << std::endl;

	Bureaucrat d("Bureaucrat[b]",0);
	std::cout << std::endl;

	Bureaucrat e("Bureaucrat[e]",151);
	std::cout << std::endl;

	b = a;
	std::cout << std::endl;



	std::cout<< a.getName() << std::endl;
	std::cout<< a.getGrade() << std::endl;
	std::cout << std::endl;

	std::cout<< b.getName() << std::endl;
	std::cout<< b.getGrade() << std::endl;
	std::cout << std::endl;

	std::cout<< c.getName() << std::endl;
	std::cout<< c.getGrade() << std::endl;
	std::cout << std::endl;

	a.gradeDown();
	a.gradeUp();
	std::cout<< a.getName() << std::endl;
	std::cout<< a.getGrade() << std::endl;
	std::cout << std::endl;

	c.gradeUp();
	c.gradeDown();
	std::cout<< c.getName() << std::endl;
	std::cout<< c.getGrade() << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
}
