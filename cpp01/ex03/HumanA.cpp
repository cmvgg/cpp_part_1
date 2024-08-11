#include "HumanA.hpp"

HumanA::HumanA(const std::string& str, Weapon& weaponObj) 
    : weapon(weaponObj), name(str) {
    std::cout << "Constructor HumanA" << std::endl;
}

void HumanA::attack() const {
    std::cout << this->name << " attacks with their " 
              << this->weapon.getType() << std::endl;
}

HumanA::~HumanA() {
    std::cout << "Destructor HumanA" << std::endl;
}
