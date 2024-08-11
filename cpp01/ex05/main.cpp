#include "Harl.hpp"

int main(int argc, char const** argv) {
    std::string level;
    Harl harl;

    if (argc != 2) {
        std::cout << "Enter the level of Harl: ";
        std::cin >> level;
    } else {
        level = argv[1];
    }

    harl.complain(level);
    return 0;
}
