#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default"), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "Default ClapTrap constructor called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& _name) : name(_name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "Parameterized ClapTrap constructor called" << std::endl;
    if (name.empty()) {
        name = "default";
    }
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage) {
    std::cout << "Copy ClapTrap constructor called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "ClapTrap destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        name = other.name;
        hitPoints = other.hitPoints;
        energyPoints = other.energyPoints;
        attackDamage = other.attackDamage;
    }
    return *this;
}

void ClapTrap::attack(const std::string& target) {
    if (energyPoints > 0 && hitPoints > 0) {
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
        --energyPoints;
    } else {
        std::cout << "ClapTrap " << name << " cannot attack due to insufficient energy or hit points!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints > 0) {
        if (hitPoints <= amount) {
            hitPoints = 0;
        } else {
            hitPoints -= amount;
        }
        std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " is already dead!" << std::endl;
    }
    --energyPoints;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (energyPoints > 0) {
        hitPoints += amount;
        --energyPoints;
        std::cout << "ClapTrap " << name << " is repaired for " << amount << " points!" << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " cannot be repaired due to insufficient energy!" << std::endl;
    }
}

const std::string& ClapTrap::getName() const {
    return name;
}

unsigned int ClapTrap::getHitPoints() const {
    return hitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const {
    return energyPoints;
}

unsigned int ClapTrap::getAttackDamage() const {
    return attackDamage;
}
