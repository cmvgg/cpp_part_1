#include "HumanB.hpp"

HumanB::HumanB(const std::string& str) 
    : name(str), weapon(NULL) {
    std::cout << "Constructor HumanB" << std::endl;
}

HumanB::~HumanB() {
    std::cout << "Destructor HumanB" << std::endl;
}

void HumanB::setWeapon(Weapon& weaponObj) {
    this->weapon = &weaponObj;
}

void HumanB::attack() const {
    if (this->weapon) {
        std::cout << this->name << " attacks with their " 
                  << this->weapon->getType() << std::endl;
    } else {
        std::cout << this->name << " has no weapon to attack with" << std::endl;
    }
}
