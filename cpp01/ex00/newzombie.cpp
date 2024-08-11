#include "Zombie.hpp"

Zombie* newZombie(std::string name) {
    if (name.empty()) {
        name = "zombie";
    }
    return new Zombie(name);
}
