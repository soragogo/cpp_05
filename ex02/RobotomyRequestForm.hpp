#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "Aform.hpp"

class RobotomyRequestForm : public AForm{
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string name);
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm& form);
        RobotomyRequestForm &operator=(const RobotomyRequestForm& form);
};

std::ostream& operator<<(std::ostream& out, RobotomyRequestForm& form);

#endif
