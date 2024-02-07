#include "AForm.hpp"

AForm::AForm() :target("Default"), name("AForm"), grade_to_execute(100), grade_to_sign(100), is_signed(false){
	std::cout << "[AForm] Constructor called" <<std::endl;
    if (grade_to_execute < 1 || grade_to_sign < 1) {
        throw GradeTooHighException();
    }
    else if (grade_to_execute > 150 || grade_to_sign > 150) {
        throw GradeTooLowException();
    }
}

AForm::AForm(const std::string target) :target(target), name("AForm"), grade_to_execute(100), grade_to_sign(100), is_signed(false) {
	std::cout << "[AForm] Constructor called" <<std::endl;
    if (grade_to_execute < 1 || grade_to_sign < 1) {
        throw GradeTooHighException();
    }
    else if (grade_to_execute > 150 || grade_to_sign > 150) {
        throw GradeTooLowException();
    }
}

AForm::AForm(const std::string target, const std::string name, const int grade_to_execute, const int grade_to_sign, bool is_signed)
:target(target), name(name), grade_to_execute(100), grade_to_sign(100), is_signed(is_signed)
{
	std::cout << "[AForm] Constructor called" <<std::endl;
    if (grade_to_execute < 1 || grade_to_sign < 1) {
        throw GradeTooHighException();
    }
    else if (grade_to_execute > 150 || grade_to_sign > 150) {
        throw GradeTooLowException();
    }
}

AForm::~AForm(){
	std::cout << "[AForm] Destructor called" <<std::endl;

}

AForm::AForm(const AForm &form) : target(form.target) ,name(form.name), grade_to_execute(form.grade_to_execute), grade_to_sign(form.grade_to_sign), is_signed(form.is_signed){
	std::cout << "[AForm] Copy constructor called" <<std::endl;
    if (grade_to_execute < 1 || grade_to_sign < 1) {
        throw GradeTooHighException();
    }
    else if (grade_to_execute > 150 || grade_to_sign > 150) {
        throw GradeTooLowException();
    }
}

AForm &AForm::operator=(const AForm &form){
	std::cout << "[AForm] Copy assignment operator called" <<std::endl;
	if (this != &form) {
        this->is_signed = form.getIsSigned();
    }
	return *this;
}

std::ostream& operator<<(std::ostream& out, AForm& AForm) {
	out << AForm.getName() << ", AForm grade(execute) " << AForm.getGradeToExecute();
    out << ", grade(sign) " << AForm.getGradeToSign() << std::endl;
	return out;
}

std::string AForm::getTarget() const{
    return this->target;
}

// void AForm::setGradeToExecute(int grade){
// 	if (grade < 1){
// 		throw AForm::GradeTooHighException();
// 	} else if (grade > 150) {
// 		throw AForm::GradeTooLowException();
// 	}
// 	else
// 		this->grade_to_execute = grade;
// }

// void AForm::setGradeToSign(int grade){
// 	if (grade < 1){
// 		throw AForm::GradeTooHighException();
// 	} else if (grade > 150) {
// 		throw AForm::GradeTooLowException();
// 	}
// 	else
// 		this->grade_to_sign = grade;
// }

void AForm::setIsSigned(bool is_signed) {
    this->is_signed = is_signed;
}


std::string AForm::getName() const{
	return name;
}

int AForm::getGradeToExecute() const{
	return grade_to_execute;
}

int AForm::getGradeToSign() const{
	return grade_to_sign;
}

bool AForm::getIsSigned() const{
	return is_signed;
}

void AForm::beSigned(Bureaucrat& brc) {
    if (brc.getGrade() <= this->grade_to_sign) {
        this->is_signed = true;
    }
    else {
        throw GradeTooLowException();
    }
}



const char *AForm::GradeTooHighException::what() const throw(){
	return "Grade is too high";
}

const char *AForm::GradeTooLowException::what() const throw(){
	return "Grade is too low";
}

const char *AForm::FormNotSignedException::what() const throw(){
	return "Form is not signed yet";
}

const char *AForm::FormExecuteException::what() const throw(){
	return "Form failed to be executed";
}

const char *AForm::implementExcepetion::what() const throw(){
	return "Job implementation failed";
}



void AForm::execute(Bureaucrat const & executer) const {
    if (getIsSigned()) {
        if (executer.getGrade() > this->getGradeToExecute()) {
            throw GradeTooLowException();
        }
        else {
            try {
                std::cout << this->getName() <<" is being executed..." << std::endl;
                implementJob(getTarget());
            }
            catch (AForm::implementExcepetion &e){
                std::cerr << "Failed to implement the job" << std::endl;
                std::cerr << "Reason: " << e.what() << std::endl;
            }
        }
    }
    else {
        throw FormNotSignedException();
    }
};


// void AForm::implementJob(std::string target) const{
//     std::cout << "Implementing the job for " << target << std::endl;
// }
