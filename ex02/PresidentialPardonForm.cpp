#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("DefaultName", 45, 72, false) {
    std::cout << "[PresidentialPardonForm] Constructor called" <<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string name) : AForm(name, 45, 72, false){
    std::cout << "[PresidentialPardonForm] Copy constructor called" <<std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& form) : AForm(form){
    std::cout << "[PresidentialPardonForm] Copy assignment operator called" <<std::endl;
}


PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "[PresidentialPardonForm] Destructor called" <<std::endl;
}


PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& form) {
    if (this != &form) {
        AForm::operator=(form);
    }
    return *this;
}

std::ostream& operator<<(std::ostream& out, PresidentialPardonForm& form) {
	out << form.getName() << ", PresidentialPardonForm grade(execute) " << form.getGradeToExecute();
    out << ", grade(sign) " << form.getGradeToSign() << std::endl;
	return out;
}

