
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void testForm(){
	std::cout <<BLUE<< "1. Testing Aform" << END << std::endl;
	std::cout <<RED<< "Aform is an abstract class" << END << std::endl;
	// AForm form;

}

// void testBureaucrat(){
// 	std::cout <<BLUE<< "Testing Bureaucrat" << END << std::endl;
// 	Bureaucrat a("Bureaucrat[a]", 151);
// 	Bureaucrat b("Bureaucrat[b]", 0);
// 	std::cout << a;
// 	std::cout << b;

// 	a.signForm(form);
// 	b.signForm(form);
// }

void testShrubberyCreationForm() {
	std::cout <<BLUE<< "2. Testing Shrubbery" << END << std::endl;
	ShrubberyCreationForm Sform("target2");
	std::cout << Sform;
	std::cout <<RED<< "a. Sform has not been signed yet" << END << std::endl;
	Bureaucrat foo("Bureaucrat[foo]", 150);
	std::cout << foo;
	try {
		// Sform.beSigned(foo);
		foo.executeForm(Sform);
	}
	catch (ShrubberyCreationForm::FormNotSignedException &e){
		std::cerr << e.what();
	}
	std::cout <<RED<< "b. Foo does not have enough grade to sign" << END << std::endl;
	try {
		Sform.beSigned(foo);
	}
	catch (ShrubberyCreationForm::GradeTooLowException &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout <<RED<< "c. Foo does not have enough grade to execute" << END << std::endl;
	Bureaucrat bar("Bureaucrat[bar]", 100);
	std::cout << bar;
	try {
		Sform.beSigned(bar);
		foo.executeForm(Sform);
	}
	catch (ShrubberyCreationForm::GradeTooLowException &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout <<GREEN<< "d. Test that passes" << END << std::endl;
	try {
		Sform.beSigned(bar);
		bar.executeForm(Sform);
	}
	catch (ShrubberyCreationForm::FormNotSignedException &e){
		std::cerr << e.what();
	}
	catch (ShrubberyCreationForm::FormExecuteException &e){
		std::cerr << e.what();
	}
}

void testRobotomyRequestForm() {
	std::cout <<BLUE<< "3. Testing Robotomy" << END << std::endl;
	RobotomyRequestForm Rform("target3");
	std::cout << Rform;
	std::cout <<RED<< "a. Rform has not been signed yet" << END << std::endl;
	Bureaucrat foo("Bureaucrat[foo]", 150);
	std::cout << foo;
	try {
		// Rform.beSigned(foo);
		foo.executeForm(Rform);
	}
	catch (RobotomyRequestForm::FormNotSignedException &e){
		std::cerr << e.what();
	}
	std::cout <<RED<< "b. Foo does not have enough grade to sign" << END << std::endl;
	try {
		Rform.beSigned(foo);
	}
	catch (RobotomyRequestForm::GradeTooLowException &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout <<RED<< "c. Foo does not have enough grade to execute" << END << std::endl;
	Bureaucrat bar("Bureaucrat[bar]", 5);
	std::cout << bar;
	try {
		Rform.beSigned(bar);
		foo.executeForm(Rform);
	}
	catch (RobotomyRequestForm::GradeTooLowException &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout <<GREEN<< "d. Test that passes" << END << std::endl;
	try {
		Rform.beSigned(bar);
		bar.executeForm(Rform);
	}
	catch (RobotomyRequestForm::FormNotSignedException &e){
		std::cerr << e.what();
	}
	catch (RobotomyRequestForm::FormExecuteException &e){
		std::cerr << e.what();
	}
}

void testPresidentialPardonForm() {
	std::cout <<BLUE<< "4. Testing President" << END << std::endl;
	PresidentialPardonForm Pform("target4");
	std::cout << Pform;
	std::cout <<RED<< "a. Pform has not been signed yet" << END << std::endl;
	Bureaucrat foo("Bureaucrat[foo]", 150);
	std::cout << foo;
	try {
		// Pform.beSigned(foo);
		foo.executeForm(Pform);
	}
	catch (PresidentialPardonForm::FormNotSignedException &e){
		std::cerr << e.what();
	}
	std::cout <<RED<< "b. Foo does not have enough grade to sign" << END << std::endl;
	try {
		Pform.beSigned(foo);
	}
	catch (PresidentialPardonForm::GradeTooLowException &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout <<RED<< "c. Foo does not have enough grade to execute" << END << std::endl;
	Bureaucrat bar("Bureaucrat[bar]", 5);
	std::cout << bar;
	try {
		Pform.beSigned(bar);
		foo.executeForm(Pform);
	}
	catch (PresidentialPardonForm::GradeTooLowException &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout <<GREEN<< "d. Test that passes" << END << std::endl;
	try {
		Pform.beSigned(bar);
		bar.executeForm(Pform);
	}
	catch (PresidentialPardonForm::FormNotSignedException &e){
		std::cerr << e.what();
	}
	catch (PresidentialPardonForm::FormExecuteException &e){
		std::cerr << e.what();
	}
}

int main(){
	std::cout <<BLUE<<BOLD<< "Starting test 🚀" <<END<<std::endl;
	std::cout << "-----------------------------" << std::endl;
	testForm();
	std::cout << "-----------------------------" << std::endl;
	testShrubberyCreationForm();
	std::cout << "-----------------------------" << std::endl;
	testRobotomyRequestForm();
	std::cout << "-----------------------------" << std::endl;
	testPresidentialPardonForm();
	std::cout << "-----------------------------" << std::endl;
	return 0;
}
