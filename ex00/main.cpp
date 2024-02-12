#include "Bureaucrat.hpp"

int main(){
	try{
		std::cout << BOLD << BLUE << "Starting test 🚀" << END << std::endl;
		std::cout << BLUE << "A. Definition" << END << std::endl;
		std::cout << GREEN << "1. Defining Bureaucrat[a]" << END << std::endl;
		Bureaucrat a;
		std::cout <<a;

		std::cout << GREEN << "2. Defining Bureaucrat[b]" << END << std::endl;
		Bureaucrat b("Bureaucrat[b]", 150);
		std::cout <<b;

		std::cout << GREEN << "3. Defining Bureaucrat[c]" << END << std::endl;
		Bureaucrat c("Bureaucrat[c]", 1);
		std::cout <<c;

		// std::cout << RED << "4. Defining Bureaucrat[d]" << END << std::endl;
		// Bureaucrat d("Bureaucrat[b]",151);
		// std::cout <<d;

		// std::cout << RED << "5. Defining Bureaucrat[e]" << END << std::endl;
		// Bureaucrat e("Bureaucrat[e]",0);
		// std::cout <<e;


		std::cout<<std::endl;
		std::cout << BLUE << "B. gradeUp & gradeDown" << END << std::endl;
		std::cout << RED << "6. Trying to grade up c (level:1)" << END << std::endl;
		c.gradeUp();
		std::cout<< c;
		std::cout << RED << "7. Trying to grade down b (level:150)" << END << std::endl;
		b.gradeDown();
		std::cout<< b;
		std::cout << GREEN << "8. Trying to grade up b (level:150)" << END << std::endl;
		b.gradeUp();
		std::cout<< b;
		std::cout << GREEN << "9. Trying to grade down c (level:1)" << END << std::endl;
		c.gradeDown();
		std::cout<< c;
		std::cout << BOLD << BLUE << "Ending test ..." << END << std::endl;
	}
	catch (std::exception &e) {
		std::cout << "------------------------------------" << std::endl;
		std::cout<<e.what()<<std::endl;
	}

}
