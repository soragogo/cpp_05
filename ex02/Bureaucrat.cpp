
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Bureaucrat"), grade(150){
	std::cout << "[Bureaucrat] Constructor called" <<std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : name(name) {
	std::cout << "[Bureaucrat] Constructor called" <<std::endl;
	try {
		setGrade(grade);
	} catch (const Bureaucrat::GradeTooHighException& e) {
		std::cerr << "[Bureaucrat] " << e.what() << std::endl;
		setGrade(1);
	} catch (const Bureaucrat::GradeTooLowException& e) {
		std::cerr << "[Bureaucrat] " << e.what() << std::endl;
		setGrade(150);
	}
}

Bureaucrat::~Bureaucrat(){
	std::cout << "[Bureaucrat] Destructor called" <<std::endl;

}

Bureaucrat::Bureaucrat(const Bureaucrat &brc) : name(brc.name), grade(brc.grade){
	std::cout << "[Bureaucrat] Copy constructor called" <<std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &brc){
	std::cout << "[Bureaucrat] Copy assignment operator called" <<std::endl;
	if (this != &brc)
		this->grade = brc.grade;
	return *this;
}

std::ostream& operator<<(std::ostream& out, Bureaucrat& bureaucrat) {
	out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << "." << std::endl;
	return out;
}

void Bureaucrat::setGrade(int grade){
	if (grade < 1){
		throw Bureaucrat::GradeTooHighException();
	} else if (grade > 150) {
		throw Bureaucrat::GradeTooLowException();
	}
	else
		this->grade = grade;
}

std::string Bureaucrat::getName() const{
	return name;
}

int Bureaucrat::getGrade() const{
	return grade;
}

const char *Bureaucrat::GradeTooHighException::what() const throw(){
	return "Grade is too high";
}

const char *Bureaucrat::GradeTooLowException::what() const throw(){
	return "Grade is too low";
}

void Bureaucrat::gradeUp(){
	try {
		std::cout << "[Bureaucrat] trying to grade up..." << std::endl;
		setGrade(grade - 1);
	} catch (Bureaucrat::GradeTooHighException& e) {
		std::cerr << e.what() << std::endl;
	}
}

void Bureaucrat::gradeDown(){
	try {
		std::cout << "[Bureaucrat] trying to grade down..." << std::endl;
		setGrade(grade + 1);
	} catch (Bureaucrat::GradeTooLowException& e) {
		std::cerr << e.what() << std::endl;
	}
}

void Bureaucrat::signForm(AForm &form) {
	try {
		form.beSigned(*this);
		std::cout << getName() << " signed " << form.getName() << std::endl;
	} catch (AForm::GradeTooLowException& e) {
		std::cerr << getName() << " could not sign " << form.getName();
		std::cerr << " because: " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & form) {
	try {
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	} catch (AForm::GradeTooLowException &e) {
		std::cout << this->getName() << " failed to execute " << form.getName() << std::endl;
		std::cout << "Reason: " << e.what() << std::endl;

	} catch (AForm::FormNotSignedException &e) {
		std::cout << this->getName() << " failed to execute " << form.getName() << std::endl;
		std::cout << "Reason: " << e.what() << std::endl;
	} catch (AForm::FormExecuteException &e) {
		std::cout << this->getName() << " failed to execute " << form.getName() << std::endl;
		std::cout << "Reason: " << e.what() << std::endl;
	}
}
