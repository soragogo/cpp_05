
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(const std::string target) :AForm(target, "Rform", 45, 72) {
    std::cout << "[RobotomyRequestForm] Constructor called" <<std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& form) : AForm(form){
    std::cout << "[RobotomyRequestForm] Copy assignment operator called" <<std::endl;
}


RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "[RobotomyRequestForm] Destructor called" <<std::endl;

}


RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& form) {
    if (this != &form) {
        AForm::operator=(form);
    }
    return *this;
}

std::ostream& operator<<(std::ostream& out, RobotomyRequestForm& form) {
	out << form.getName() << ", RobotomyRequestForm grade(execute) " << form.getGradeToExecute();
    out << ", grade(sign) " << form.getGradeToSign() << std::endl;
	return out;
}

void RobotomyRequestForm::implementJob(std::string target) const{
    std::cout << "Bzzzzzzzzzzzzzzzzzzzz" << std::endl;
    srand(static_cast<unsigned int>(time(0)));
    int success = rand() % 2;
    if (success) std::cout << target << " is successfully robotomized" << std::endl;
    else std::cout << "Failed to robotomize " << target << std::endl;
}
