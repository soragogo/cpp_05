/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/10 17:57:47 by ekamada           #+#    #+#             */
/*   Updated: 2024/01/18 14:00:41 by emukamada        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include <string>
#include <iostream>

class AForm;

class Bureaucrat{
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		~Bureaucrat();
		Bureaucrat(const Bureaucrat &brc);
		Bureaucrat &operator=(const Bureaucrat &brc);
		std::ostream& operator<<(std::ostream& out) const;
		void setGrade(int grade);
		std::string getName() const;
		int getGrade() const;
		void gradeUp();
		void gradeDown();
		void signForm(AForm& form);
		class GradeTooHighException : public std::exception {
			public:
				const char *what() const throw();
		};
		class GradeTooLowException : public std::exception {
			public:
				const char *what() const throw();
		};
	private:
		const std::string name;
		int grade;
};


std::ostream& operator<<(std::ostream& out, Bureaucrat& bureaucrat);
