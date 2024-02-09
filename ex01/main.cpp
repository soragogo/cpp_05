
#include "Bureaucrat.hpp"

void testForm(){
	std::cout <<BLUE<<"1. Testing Form" <<END<< std::endl;
	std::cout <<RED<< "a. making a form that has too high grade" <<END<< std::endl;
	try{
		Form tmp("HighForm", 0, 0, false);
		std::cout << tmp;
	}
	catch (Form::GradeTooHighException& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout <<RED<< "b. making a form that has too low grade" <<END<<std::endl;
	try{
		Form tmp("LowForm", 151, 151, false);
		std::cout << tmp;
	}
	catch (Form::GradeTooLowException& e) {
		std::cerr << e.what() << std::endl;
	}
	std::cout <<GREEN<< "c. making a ligitimate form" <<END<< std::endl;
	Form tmp("LigitForm", 150, 150, false);
	std::cout << tmp;
	std::cout << "--------------------------" <<std::endl;
}

void testBureaucrat(){
	std::cout <<BLUE<<"2. Testing Bureaucrat" <<END<< std::endl;
	Form forma("formA", 100, 100, false);
	Form formb("formB", 100, 100, false);
	std::cout <<forma;
	std::cout <<formb;
	std::cout <<GREEN<<"a. Bureaucrat[a](level:1) can sign the form" <<END<< std::endl;
	Bureaucrat a("Bureaucrat[a]", 1);
	std::cout << a;
	a.signForm(forma);
	std::cout <<"forma.getIsSigned(): "<< forma.getIsSigned() << std::endl;
	std::cout <<RED<<"b. Bureaucrat[b](level:150) fails to sign the form" <<END<< std::endl;
	Bureaucrat b("Bureaucrat[b]", 150);
	std::cout << b;
	b.signForm(formb);
	std::cout <<"formb.getIsSigned(): "<< formb.getIsSigned() << std::endl;
	std::cout << "--------------------------" <<std::endl;
}

int main(){
	std::cout <<BLUE<<BOLD<< "Starting test 🚀" <<END<< std::endl;
	testForm();
	std::cout <<std::endl;
	testBureaucrat();
	std::cout <<BLUE<<"Ending test ..." <<END<< std::endl;
	return 0;
}
