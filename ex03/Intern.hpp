#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"
class Intern{
    public:
        Intern();
		~Intern();
		Intern(const Intern &intern);
		Intern &operator=(const Intern &intern);
        AForm *makeForm(std::string form, std::string target);
    private:
        std::string options[3];
};

#endif
