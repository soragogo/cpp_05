
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("DefaultName", 137, 145, false) {
    std::cout << "[ShrubberyCreationForm] Constructor called" <<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string name) : AForm(name, 137, 145, false){
    std::cout << "[ShrubberyCreationForm] Copy constructor called" <<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& form) : AForm(form){
    std::cout << "[ShrubberyCreationForm] Copy assignment operator called" <<std::endl;
}


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
