/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekamada <ekamada@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:57:46 by ekamada           #+#    #+#             */
/*   Updated: 2024/01/10 18:40:53 by ekamada          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){
	Bureaucrat a("Vureaucrat", 140);
	Bureaucrat b;
	Bureaucrat c;
	c = b;

	std::cout<< a.getName() << std::endl;
	std::cout<< a.getGrade() << std::endl;
	std::cout<< b.getName() << std::endl;
	std::cout<< b.getGrade() << std::endl;
	std::cout<< c.getName() << std::endl;
	std::cout<< c.getGrade() << std::endl;
}
