
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

void testForm(){

	try{
		AForm tmp("tmp", -100, -100, false);
	}
	catch (AForm::GradeTooHighException& e) {
		std::cerr << e.what() << std::endl;
	}
	catch (AForm::GradeTooLowException& e) {
		std::cerr << e.what() << std::endl;
	}
	// std::cout << tmp << std::endl;
}

void testBureaucrat(AForm& form){
	Bureaucrat a("Bureaucrat[a]", 151);
	Bureaucrat b("Bureaucrat[b]", 0);
	std::cout << a;
	std::cout << b;

	a.signForm(form);
	b.signForm(form);
}

void testShrubberyCreationForm(ShrubberyCreationForm &form) {
	std::cout << form;
	Bureaucrat s("Bureaucrat[s]", 10);
	form.createShrubbery("test");
	form.beSigned(s);
}

int main(){

	// Bureaucrat a("Bureaucrat[a]", 150);
	// std::cout << std::endl;

	// Bureaucrat b;
	// std::cout << std::endl;
	testForm();
	AForm Aform;
	ShrubberyCreationForm Sform;
	testShrubberyCreationForm(Sform);
	std::cout << Aform;
	std::cout << Sform;
	testBureaucrat(Aform);
	return 0;
}
