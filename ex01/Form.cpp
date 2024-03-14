#include "Form.hpp"

Form::Form() : name("Form"), grade_to_execute(100), grade_to_sign(100), is_signed(false){
	std::cout << "[Form] Constructor called" <<std::endl;
    if (grade_to_execute < 1 || grade_to_sign < 1)
        throw GradeTooHighException();
    else if (grade_to_execute > 150 || grade_to_sign > 150)
        throw GradeTooLowException();
}

Form::Form(std::string name, const int grade_to_execute, const int grade_to_sign)
: name(name), grade_to_execute(grade_to_execute), grade_to_sign(grade_to_sign), is_signed(false) {
	std::cout << "[Form] Constructor called" <<std::endl;
    if (grade_to_execute < 1 || grade_to_sign < 1)
        throw GradeTooHighException();
    else if (grade_to_execute > 150 || grade_to_sign > 150)
        throw GradeTooLowException();
}

Form::~Form(){
	std::cout << "[Form] Destructor called" <<std::endl;
}

Form::Form(const Form &form) : name(form.name), grade_to_execute(form.grade_to_execute), grade_to_sign(form.grade_to_sign), is_signed(form.is_signed){
	std::cout << "[Form] Copy constructor called" <<std::endl;
    if (grade_to_execute < 1 || grade_to_sign < 1)
        throw GradeTooHighException();
    else if (grade_to_execute > 150 || grade_to_sign > 150)
        throw GradeTooLowException();
}

Form &Form::operator=(const Form &form){
	std::cout << "[Form] Copy assignment operator called" <<std::endl;
	if (this != &form)
        this->is_signed = form.is_signed;
	return *this;
}

std::ostream& operator<<(std::ostream& out, Form& Form) {
	out << Form.getName() << ", Form grade(execute) " << Form.getGradeToExecute();
    out << ", grade(sign) " << Form.getGradeToSign() << std::endl;
	return out;
}


void Form::setIsSigned(bool is_signed) {this->is_signed = is_signed;}
std::string Form::getName() const{return name;}
int Form::getGradeToExecute() const{return grade_to_execute;}
int Form::getGradeToSign() const{return grade_to_sign;}
bool Form::getIsSigned(){return is_signed;}

void Form::beSigned(Bureaucrat& brc) {
    if (brc.getGrade() <= this->grade_to_sign)
        this->is_signed = true;
    else
        throw GradeTooLowException();
}



const char *Form::GradeTooHighException::what() const throw(){
	return "[Form] Grade is too high";
}

const char *Form::GradeTooLowException::what() const throw(){
	return "[Form] Grade is too low";
}

