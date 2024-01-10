#pragma once
#include <string>

class Bureaucrat{
	public:
		Bureaucrat();
		~Bureaucrat();
		Bureaucrat(Bureaucrat &brc);
		Bureaucrat &operator=(Bureaucrat &brc);
	private:
		const std::string name;
		int grade;
};
