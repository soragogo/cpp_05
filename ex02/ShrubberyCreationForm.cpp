
#include "ShrubberyCreationForm.hpp"


ShrubberyCreationForm::ShrubberyCreationForm(const std::string target) : AForm(target, "Sform", 137, 145){
    std::cout << "[ShrubberyCreationForm] Constructor called" <<std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& form) : AForm(form){
    std::cout << "[ShrubberyCreationForm] Copy constructor called" <<std::endl;
}


ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "[ShrubberyCreationForm] Destructor called" <<std::endl;

}


ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& form) {
    std::cout << "[ShrubberyCreationForm] Copy assignment operator called" <<std::endl;
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

const char *ShrubberyCreationForm::implementExcepetion::what() const throw(){
    return "Failed to open file";
}


void ShrubberyCreationForm::implementJob(std::string target) const{
        std::string fileName = target + "_file";
        std::ofstream file(fileName.c_str());
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
        else throw implementExcepetion();
}
