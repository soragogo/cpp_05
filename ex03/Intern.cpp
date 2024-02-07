
#include "Intern.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){
	std::cout << "[Intern] Constructor called" <<std::endl;
    options[0] = "shrubbery creation";
    options[1] = "robotomy request";
    options[2] = "presidential pardon";
}

Intern::~Intern(){
	std::cout << "[Intern] Destructor called" <<std::endl;

}

Intern::Intern(const Intern &intern){
	std::cout << "[Intern] Copy constructor called" <<std::endl;
    this->options[0] = intern.options[0];
    this->options[1] = intern.options[1];
    this->options[2] = intern.options[2];
}

Intern &Intern::operator=(const Intern &intern){
	std::cout << "[Intern] Copy assignment operator called" <<std::endl;
    if (this != &intern) {
        this->options[0] = intern.options[0];
        this->options[1] = intern.options[1];
        this->options[2] = intern.options[2];
    }
	return *this;
}


AForm *Intern::makeForm(std::string form, std::string target) {
    int i;
    AForm *rtf;
    for (i = 0; i < 4; i++) {
        if (options[i] == form) break;
    }
    switch(i) {
        case 0:
            rtf = new ShrubberyCreationForm(target);
            return rtf;
            break;
        case 1:
            rtf = new RobotomyRequestForm(target);
            return rtf;
            break;
        case 2:
            rtf = new PresidentialPardonForm(target);
            return rtf;
            break;
        default:
            std::cerr << "Form does not exist" << std::endl;
            return NULL;
    }

}
