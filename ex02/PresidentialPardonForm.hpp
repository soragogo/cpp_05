#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "Aform.hpp"

class PresidentialPardonForm : public AForm{
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string name);
        ~PresidentialPardonForm();
        PresidentialPardonForm(const PresidentialPardonForm& form);
        PresidentialPardonForm &operator=(const PresidentialPardonForm& form);
};

std::ostream& operator<<(std::ostream& out, PresidentialPardonForm& form);

#endif
