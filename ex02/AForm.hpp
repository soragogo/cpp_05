#ifndef AFORM_HPP
#define AFORM_HPP
#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

class Bureaucrat;

class AForm{
    public:
        AForm();
        AForm(const std::string target);
        AForm(const std::string target, const std::string name, const int grade_to_execute, const int grade_to_sign, bool is_signed);
        ~AForm();
        AForm(const AForm& form);
        AForm &operator=(const AForm& form);
        std::string getName() const;
        std::string getTarget() const;
        int getGradeToExecute() const;
        int getGradeToSign() const;
        bool getIsSigned() const;
        void setIsSigned(bool is_signed);
        void beSigned(Bureaucrat &brc);
        void execute(Bureaucrat const & executer) const;
        virtual void implementJob(std::string target) const = 0;
        class GradeTooLowException : public std::exception{
			    public:
				    const char *what() const throw();
        };
        class GradeTooHighException : public std::exception{
			    public:
				    const char *what() const throw();
        };
        class FormNotSignedException : public std::exception{
			    public:
				    const char *what() const throw();
        };
        class FormExecuteException : public std::exception{
			    public:
				    const char *what() const throw();
        };
        class implementExcepetion : public std::exception{
			    public:
				    const char *what() const throw();
        };
    private:
        const std::string target;
        const std::string name;
        const int grade_to_execute;
        const int grade_to_sign;
        bool is_signed;
};

std::ostream& operator<<(std::ostream& out, AForm& form);

// color
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
