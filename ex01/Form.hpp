#pragma once
#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class Bureaucrat;

class Form{
    public:
        Form();
        ~Form();
        Form(std::string name, int grade_to_execute,
         int grade_to_sign, bool is_signed);
        Form(const Form& form);
        Form &operator=(const Form& form);
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

std::ostream& operator<<(std::ostream& out, Form& form);
