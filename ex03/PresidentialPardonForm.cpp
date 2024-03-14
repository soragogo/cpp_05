#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string target) :AForm(target, "PForm", 5, 25) {
    std::cout << "[PresidentialPardonForm] Constructor called" <<std::endl;
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


void PresidentialPardonForm::implementJob(std::string target) const{
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
