/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emukamada <emukamada@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/18 19:44:24 by emukamada         #+#    #+#             */
/*   Updated: 2024/01/20 11:58:23 by emukamada        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "[ShrubberyCreationForm] Destructor called" <<std::endl;

}


ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& form) {
    if (this != &form) {
        AForm::operator=(form);
    }
    return *this;
}

std::ostream& operator<<(std::ostream& out, ShrubberyCreationForm& form) {
	out << form.getName() << ", ShrubberyCreationForm grade(execute) " << form.getGradeToExecute();
    out << ", grade(sign) " << form.getGradeToSign() << std::endl;
	return out;
}

void ShrubberyCreationForm::createShrubbery(std::string target) {
    if (getIsSigned()) {
        std::ofstream file(target + "_file");
        if (file.is_open()) {
            for (int i = 0; i < 5; i++) {
                file << "                                    :=**##**+=-. ...." << std::endl;
                file << "                                    =@@@@@@@@@@@@@@@@@@@@*-" << std::endl;
                file << "                                   #@@@@@@@@@@@@@@@@@@@@@@@#." << std::endl;
                file << "                                ..*@@@@@@@@@@@@@@@@@@@@@@@@@#" << std::endl;
                file << "                          -+#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@-" << std::endl;
                file << "                        =@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@* .::." << std::endl;
                file << "                       -@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@#." << std::endl;
                file << "                       #@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
                file << "                       #@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@+" << std::endl;
                file << "                    .=#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@" << std::endl;
                file << "                 .=%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%#+-." << std::endl;
                file << "               .#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%=" << std::endl;
                file << "              :@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%:" << std::endl;
                file << "              %@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%" << std::endl;
                file << "              %@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@." << std::endl;
                file << "              -@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@%" << std::endl;
                file << "               -@@@@@@@@@@@@@@@@@@@@@@%%@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@:" << std::endl;
                file << "                *@@@@@@@@@@@@@@@@@@@@%  +@@@@@@@@@@@%+.#@@@@@@@@@@@@@@@@@@@@*." << std::endl;
                file << "               .@@@@@@@@@@@@@@@@@@@@@=   .+@@@@@@%*:  .@@@@@@@@@@@@@@@@@@#=." << std::endl;
                file << "               -@@@@@@@@@@@@@@@@@@@@%       .:::      =@@@@@@@@@@@@@@@@@@" << std::endl;
                file << "               .@@@@@@@@@@@@@@@@@@@%.       *##=      -@@@@@@@@@@@@@@@@@@:" << std::endl;
                file << "                :%@@@@@@@@%#%@@@@#=.*=      #@@*       -+***%@@@@@@@@@@@*" << std::endl;
                file << "                  .=*%@@@@@@#*+==+  *@%:    #@@%     :#@@@-%@@@@@@%---:" << std::endl;
                file << "                        =%@@@@@@@@%. -%@*.  #@@@   :#@@@@+.@@@@@@#" << std::endl;
                file << "                          :=*##*+-     +@@+-%@@@=-%@@@@+ .+*@@@%=" << std::endl;
                file << "                                        :%@@@@@@@@@@@+.   :--:." << std::endl;
                file << "                                         .@@@@@@@@@#." << std::endl;
                file << "                                          *@@@@@@@#" << std::endl;
                file << "                                          *@@@@@@@-" << std::endl;
                file << "                                          *@@@@@@@-" << std::endl;
                file << "                                          *@@@@@@@-" << std::endl;
                file << "                                          *@@@@@@@-" << std::endl;
                file << "                                          *@@@@@@@-" << std::endl;
                file << "                                          *@@@@@@@-" << std::endl;
                file << "                                          *@@@@@@@-" << std::endl;
                file << "                                          *@@@@@@@-" << std::endl;
                file << "                                          *@@@@@@@-" << std::endl;
                file << "                                          *@@@@@@@-" << std::endl;
                file << "                                          *@@@@@@@-" << std::endl;
                file << "                                          *@@@@@@@-" << std::endl;
                file << "                                          *@@@@@@@-" << std::endl;
                file << "                                          *@@@@@@@=" << std::endl;
                file << "                                          *@@@@@@@*" << std::endl;
                file << "                                          *@@@@@@@@-" << std::endl;
                file << "                                          *@@@@@@@@@-" << std::endl;
                file << "                                        -#@@#%@@@@@@@*" << std::endl;
                file << "                                      =%@*-   -%@@@--==." << std::endl;
                file << "                                     -+-        -%%:" << std::endl;
            }
        file.close();
        }
        else std::cerr << "Failed to create the file" << std::endl;
    }
    else {
        std::cerr << "Shrubbery creation form is not signed yet" << std::endl;
    }
}
