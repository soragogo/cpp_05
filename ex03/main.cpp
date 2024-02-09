#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(){
	std::cout << BLUE << BOLD << "Starting Test 🚀" << END << std::endl;
	Intern someRamdomIntern;
	Bureaucrat brc("brc1", 5);

	AForm* rtf1;
	AForm* rtf2;
	AForm* rtf3;
	AForm* rtf4;

	std::cout << GREEN << "1. Shrubbery creation" << END << std::endl;
	rtf2 = someRamdomIntern.makeForm("shrubbery creation", "SBender");
	rtf2->beSigned(brc);
	brc.executeForm(*rtf2);

	std::cout << GREEN << "2. Robotomy request" << END << std::endl;
	rtf1 = someRamdomIntern.makeForm("robotomy request", "RBender");
	rtf1->beSigned(brc);
	brc.executeForm(*rtf1);

	std::cout << GREEN << "3. Presidential pardon" << END << std::endl;
	rtf3 = someRamdomIntern.makeForm("presidential pardon", "PBender");
	rtf3->beSigned(brc);
	brc.executeForm(*rtf3);

	std::cout << RED << "4. No matches" << END << std::endl;
	rtf4 = someRamdomIntern.makeForm("no matches", "Bender");

	std::cout << BLUE << BOLD << "Deleting forms...." << END << std::endl;
	delete rtf1;
	delete rtf2;
	delete rtf3;
	delete rtf4;
}

void end(void)__attribute__((destructor));

void end(void)
{
    system("leaks -q a.out");
}
