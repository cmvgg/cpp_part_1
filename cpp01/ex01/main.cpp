#include "zombie.hpp"

std::string getInput(const std::string& banner) {
    std::string str;

    std::cout << banner;
    std::getline(std::cin, str);
    if (str.empty()) {
        std::cout << "Input cannot be empty. Please try again." << std::endl;
        return getInput(banner);
    }
    return str;
}

int main(void) {
    std::string input = getInput("Enter the number of zombies: ");
    int N = std::atoi(input.c_str()); // Use atoi instead of std::stoi

    std::string name = getInput("Enter the name of the zombies: ");

    Zombie* zombies = zombieHorde(N, name);

    for (int i = 0; i < N; ++i) {
        zombies[i].announce();
    }
    std::cout << std::endl;

    delete[] zombies;
    return 0;
}

