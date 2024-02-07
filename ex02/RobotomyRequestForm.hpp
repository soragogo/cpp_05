#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include <cstdlib>
#include <ctime>
#include "AForm.hpp"

class RobotomyRequestForm : public AForm{
    public:
        RobotomyRequestForm(const std::string target);
        ~RobotomyRequestForm();
        RobotomyRequestForm(const RobotomyRequestForm& form);
        RobotomyRequestForm &operator=(const RobotomyRequestForm& form);
        void implementJob(std::string target) const;
};

std::ostream& operator<<(std::ostream& out, RobotomyRequestForm& form);

#endif
