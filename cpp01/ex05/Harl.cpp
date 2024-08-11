#include "Harl.hpp"

const Harl::Complaint Harl::complaints[4] = {
    {"DEBUG", &Harl::debug},
    {"INFO", &Harl::info},
    {"WARNING", &Harl::warning},
    {"ERROR", &Harl::error}
};

Harl::Harl(void) {
    std::cout << "Constructor Harl" << std::endl << std::endl;
}

Harl::~Harl(void) {
    std::cout << std::endl << "Destructor Harl" << std::endl;
}

void Harl::debug(void) {
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special\
-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) {
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put \
enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) {
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming \
for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) {
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string level) {
    for (int i = 0; i < 4; ++i) {
        if (complaints[i].level == level) {
            (this->*(complaints[i].func))();
            return;
        }
    }
    std::cout << "Invalid level" << std::endl;
}
