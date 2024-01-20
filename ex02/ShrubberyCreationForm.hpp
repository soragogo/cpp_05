/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:29:03 by emukamada         #+#    #+#             */
/*   Updated: 2024/01/20 10:12:12 by emukamada        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
    public:
        ShrubberyCreationForm() : AForm("DefaultName", 137, 145, false) {
            std::cout << "[ShrubberyCreationForm] Constructor called" <<std::endl;
        }
        ShrubberyCreationForm(std::string name) : AForm(name, 137, 145, false){
            std::cout << "[ShrubberyCreationForm] Copy constructor called" <<std::endl;
        }
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& form) : AForm(form){
            std::cout << "[ShrubberyCreationForm] Copy assignment operator called" <<std::endl;
        }
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm& form);
};

std::ostream& operator<<(std::ostream& out, ShrubberyCreationForm& form);
