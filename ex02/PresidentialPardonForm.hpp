#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"

class PresidentialPardonForm : public AForm{
    public:
        PresidentialPardonForm(std::string target);
        ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm& form);
        PresidentialPardonForm &operator=(const PresidentialPardonForm& form);
        void implementJob(std::string target) const;
};

std::ostream& operator<<(std::ostream& out, PresidentialPardonForm& form);

#endif
