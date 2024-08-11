#include "ClapTrap.hpp"

ClapTrap::ClapTrap() 
    : name("default"), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "Default constructor ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(const std::string& name) 
    : name(name.empty() ? "default" : name), hitPoints(10), energyPoints(10), attackDamage(0) {
    std::cout << "Parameterized constructor ClapTrap called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) 
    : name(other.name), hitPoints(other.hitPoints), energyPoints(other.energyPoints), attackDamage(other.attackDamage) {
    std::cout << "Copy constructor ClapTrap called" << std::endl;
}

ClapTrap::~ClapTrap() {
    std::cout << "Destructor ClapTrap called" << std::endl;
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
        std::cout << "ClapTrap " << name << " is unable to attack due to insufficient energy or hit points!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoints > 0) {
        hitPoints = (amount >= hitPoints) ? 0 : hitPoints - amount;
        std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
        --energyPoints;
    } else {
        std::cout << "ClapTrap " << name << " is already dead!" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (energyPoints > 0) {
        hitPoints += amount;
        --energyPoints;
        std::cout << "ClapTrap " << name << " is repaired for " << amount << " hit points!" << std::endl;
    } else {
        std::cout << "ClapTrap " << name << " has no energy to repair!" << std::endl;
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
