#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Default constructor of Brain" << std::endl;
    ideas = new std::string[100];
    for (int i = 0; i < 100; ++i) {
        ideas[i].clear(); 
    }
}

Brain::~Brain() {
    std::cout << "Destructor of Brain" << std::endl;
    delete[] ideas;
}

Brain::Brain(const Brain& other) {
    std::cout << "Copy constructor of Brain" << std::endl;
    ideas = new std::string[100];
    for (int i = 0; i < 100; ++i) {
        ideas[i] = other.ideas[i];
    }
}

Brain& Brain::operator=(const Brain& other) {
    if (this != &other) {
        delete[] ideas;
        ideas = new std::string[100];
        for (int i = 0; i < 100; ++i) {
            ideas[i] = other.ideas[i];
        }
    }
    return *this;
}

void Brain::allIdeas() const {
    for (int i = 0; i < 100; ++i) {
        if (!ideas[i].empty()) {
            std::cout << ideas[i] << std::endl;
        }
    }
}
