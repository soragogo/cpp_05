
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"

void testForm(){
	std::cout <<BLUE<< "1. Testing Aform" << END << std::endl;
	std::cout << RED << "a. AForm that has too high grade" << END << std::endl;

	try{
		AForm aform("aform", 0, 0, false);
	}
	catch (AForm::GradeTooHighException& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout << RED << "b. AForm that has too low grade" << END << std::endl;
	try{
		AForm aform("aform", 200, 200, false);
	}
	catch (AForm::GradeTooLowException& e) {
		std::cerr << e.what() << std::endl;
	}

	std::cout <<GREEN<< "c. AForm that passes the test" << END << std::endl;
	try{
		AForm aform("aform", 100, 100, false);
		std::cout << aform;
	}
	catch (AForm::GradeTooHighException& e) {
		std::cerr << e.what() << std::endl;
	}
	catch (AForm::GradeTooLowException& e) {
		std::cerr << e.what() << std::endl;
	}
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
	ShrubberyCreationForm Sform("sform");
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

int main(){
	std::cout <<BLUE<<BOLD<< "Starting test 🚀" <<END<<std::endl;
	std::cout << "-----------------------------" << std::endl;
	testForm();
	std::cout << "-----------------------------" << std::endl;
	testShrubberyCreationForm();
	std::cout << "-----------------------------" << std::endl;
	return 0;
}
