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
    int N;
    try {
        N = std::atoi(input.c_str());
        if (N <= 0) {
            std::cerr << "Number of zombies must be positive." << std::endl;
            return 1;
        }
    } catch (const std::invalid_argument& e) {
        std::cerr << "Invalid number format. Exiting." << std::endl;
        return 1;
    }

    Zombie* zombies = new Zombie[N];

    for (int i = 0; i < N; ++i) {
        std::string name = getInput("Enter the name of zombie: ");
        zombies[i].setName(name);
    }

    for (int i = 0; i < N; ++i) {
        zombies[i].announce();
    }
    std::cout << std::endl;

    delete[] zombies;
    return 0;
}
