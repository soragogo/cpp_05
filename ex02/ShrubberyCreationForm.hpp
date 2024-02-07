#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string name);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& form);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm& form);
        void implementJob(std::string target) const;
        class implementExcepetion : public std::exception{
            public:
                const char *what() const throw();
        };
};
std::ostream& operator<<(std::ostream& out, ShrubberyCreationForm& form);

#endif
