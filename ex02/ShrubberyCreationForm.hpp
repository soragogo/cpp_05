/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:29:03 by emukamada         #+#    #+#             */
/*   Updated: 2024/01/20 15:17:30 by emukamada        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm{
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string name);
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& form);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm& form);
        void createShrubbery(std::string target);
};

std::ostream& operator<<(std::ostream& out, ShrubberyCreationForm& form);
