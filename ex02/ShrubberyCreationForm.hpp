/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:29:03 by emukamada         #+#    #+#             */
/*   Updated: 2024/01/18 19:45:08 by emukamada        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"


class ShrubberyCreationForm : public Aform{
    public:
        ShrubberyCreationForm();
        ~ShrubberyCreationForm();
        ShrubberyCreationForm(const ShrubberyCreationForm& form);
        ShrubberyCreationForm &operator=(const ShrubberyCreationForm& form);
};

