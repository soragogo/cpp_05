
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

void testForm(){
	std::cout <<BLUE<<BOLD<< "1. Testing Aform" << END << std::endl;
	std::cout <<RED<< "Aform is an abstract class" << END << std::endl;
	std::cout <<RED<< "So you cannot complie this program if you comment out the following line" << END << std::endl;
	std::cout << "```" << END << std::endl;
	// AForm form;
	std::cout << "```" << END << std::endl;
	std::cout << "-----------------------------" << std::endl;
}

void testShrubberyCreationForm() {
	std::cout <<BLUE<<BOLD<< "2. Testing Shrubbery" << END << std::endl;
	ShrubberyCreationForm Sform("target2");
	std::cout << Sform;
	Bureaucrat foo("Bureaucrat[foo]", 150);
	std::cout << foo;
	std::cout <<RED<< "a. Sform has not been signed yet so it cannot be executed" << END << std::endl;
	try {
		foo.executeForm(Sform);
	}
	catch (std::exception &e){
		std::cerr << e.what();
	}
	std::cout <<RED<< "b. Foo does not have enough grade to sign" << END << std::endl;
	try {
		Sform.beSigned(foo);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout <<RED<< "c. Foo does not have enough grade to execute" << END << std::endl;
	Bureaucrat bar("Bureaucrat[bar]", 100);
	std::cout << bar;
	try {
		Sform.beSigned(bar);
		foo.executeForm(Sform);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout <<GREEN<< "d. Test that passes" << END << std::endl;
	try {
		Sform.beSigned(bar);
		bar.executeForm(Sform);
	}
	catch (std::exception &e){
		std::cerr << e.what();
	}
	std::cout << "-----------------------------" << std::endl;
}

void testRobotomyRequestForm() {
	std::cout <<BLUE<<BOLD<< "3. Testing Robotomy" << END << std::endl;
	RobotomyRequestForm Rform("target3");
	std::cout << Rform;
	Bureaucrat foo("Bureaucrat[foo]", 150);
	std::cout << foo;
	std::cout <<RED<< "a. Rform has not been signed yet" << END << std::endl;
	try {
		// Rform.beSigned(foo);
		foo.executeForm(Rform);
	}
	catch (std::exception &e){
		std::cerr << e.what();
	}
	std::cout <<RED<< "b. Foo does not have enough grade to sign" << END << std::endl;
	try {
		Rform.beSigned(foo);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout <<RED<< "c. Foo does not have enough grade to execute" << END << std::endl;
	Bureaucrat bar("Bureaucrat[bar]", 5);
	std::cout << bar;
	try {
		Rform.beSigned(bar);
		foo.executeForm(Rform);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout <<GREEN<< "d. Test that passes" << END << std::endl;
	try {
		Rform.beSigned(bar);
		bar.executeForm(Rform);
	}
	catch (std::exception &e){
		std::cerr << e.what();
	}
	std::cout << "-----------------------------" << std::endl;
}

void testPresidentialPardonForm() {
	std::cout <<BLUE<<BOLD<< "4. Testing President" << END << std::endl;
	PresidentialPardonForm Pform("target4");
	std::cout << Pform;
	Bureaucrat foo("Bureaucrat[foo]", 150);
	std::cout << foo;
	std::cout <<RED<< "a. Pform has not been signed yet" << END << std::endl;
	try {
		// Pform.beSigned(foo);
		foo.executeForm(Pform);
	}
	catch (std::exception &e){
		std::cerr << e.what();
	}
	std::cout <<RED<< "b. Foo does not have enough grade to sign" << END << std::endl;
	try {
		Pform.beSigned(foo);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout <<RED<< "c. Foo does not have enough grade to execute" << END << std::endl;
	Bureaucrat bar("Bureaucrat[bar]", 5);
	std::cout << bar;
	try {
		Pform.beSigned(bar);
		foo.executeForm(Pform);
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
	std::cout <<GREEN<< "d. Test that passes" << END << std::endl;
	try {
		Pform.beSigned(bar);
		bar.executeForm(Pform);
	}
	catch (std::exception &e){
		std::cerr << e.what();
	}
	std::cout << "-----------------------------" << std::endl;
}

int main(){
	std::cout <<BLUE<<BOLD<< "Starting test 🚀" <<END<<std::endl;
	testForm();
	testShrubberyCreationForm();
	testRobotomyRequestForm();
	testPresidentialPardonForm();
	return 0;
}
