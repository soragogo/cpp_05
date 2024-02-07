#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include <cstdlib>
#include <ctime>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm{
    public:
        RobotomyRequestForm();
        RobotomyRequestForm(std::string name);
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm& form);
        RobotomyRequestForm &operator=(const RobotomyRequestForm& form);
        void implementJob(std::string target) const;
};

std::ostream& operator<<(std::ostream& out, RobotomyRequestForm& form);

#endif
