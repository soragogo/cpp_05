#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include "Form.hpp"
#include <string>
#include <iostream>

class Form;

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
		void signForm(Form& form);
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

#define END             "\033[0m"
#define BOLD            "\033[1m"
#define BLACK           "\033[30m"
#define RED             "\033[31m"
#define GREEN           "\033[32m"
#define YELLOW          "\033[33m"
#define BLUE            "\033[34m"
#define MAGENTA         "\033[35m"
#define CYAN            "\033[36m"
#define WHITE           "\033[37m"
#define UNDERLINE       "\033[4m"
#define BOLD_UNDERLINE  "\033[1;4m"

#endif
