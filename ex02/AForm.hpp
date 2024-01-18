/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/16 22:45:53 by emukamada         #+#    #+#             */
/*   Updated: 2024/01/18 19:44:16 by emukamada        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class Bureaucrat;

class AForm{
    public:
        AForm();
        ~AForm();
        AForm(std::string name, int grade_to_execute,
         int grade_to_sign, bool is_signed);
        AForm(const AForm& form);
        AForm &operator=(const AForm& form);
        std::string getName() const;
        int getGradeToExecute() const;
        int getGradeToSign() const;
        bool getIsSigned();
        void setIsSigned(bool is_signed);
        void beSigned(Bureaucrat &brc);
        class GradeTooLowException : public std::exception{
			    public:
				    const char *what() const throw();
        };
        class GradeTooHighException : public std::exception{
			    public:
				    const char *what() const throw();
        };
    private:
        const std::string name;
        const int grade_to_execute;
        const int grade_to_sign;
        bool is_signed;
};

std::ostream& operator<<(std::ostream& out, AForm& form);
