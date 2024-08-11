#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default"), hitPoint(10), energyPoint(10), attackDamage(0) {
    cout << "Default ClapTrap constructor called" << endl;
}

ClapTrap::ClapTrap(const string& _name) : name(_name), hitPoint(10), energyPoint(10), attackDamage(0) {
    if (name.empty()) {
        name = "default";
    }
    cout << "Named ClapTrap constructor called" << endl;
}

ClapTrap::ClapTrap(const ClapTrap& other) : name(other.name), hitPoint(other.hitPoint), energyPoint(other.energyPoint), attackDamage(other.attackDamage) {
    cout << "ClapTrap copy constructor called" << endl;
}

ClapTrap::~ClapTrap() {
    cout << "ClapTrap destructor called" << endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other) {
    if (this != &other) {
        name = other.name;
        hitPoint = other.hitPoint;
        energyPoint = other.energyPoint;
        attackDamage = other.attackDamage;
    }
    return *this;
}

void ClapTrap::attack(const string& target) {
    if (energyPoint > 0 && hitPoint > 0) {
        cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << endl;
        --energyPoint;
    } else {
        cout << "ClapTrap " << name << " cannot attack due to insufficient energy or hit points!" << endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount) {
    if (hitPoint > 0) {
        if (hitPoint <= amount) {
            hitPoint = 0;
        } else {
            hitPoint -= amount;
        }
        cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << endl;
    } else {
        cout << "ClapTrap " << name << " is already dead!" << endl;
    }
    --energyPoint;
}

void ClapTrap::beRepaired(unsigned int amount) {
    if (energyPoint > 0) {
        hitPoint += amount;
        --energyPoint;
        cout << "ClapTrap " << name << " is repaired for " << amount << " points!" << endl;
    } else {
        cout << "ClapTrap " << name << " cannot be repaired due to insufficient energy!" << endl;
    }
}

const string& ClapTrap::getName() const {
    return name;
}

unsigned int ClapTrap::getHitPoint() const {
    return hitPoint;
}

unsigned int ClapTrap::getEnergyPoint() const {
    return energyPoint;
}

unsigned int ClapTrap::getAttackDamage() const {
    return attackDamage;
}
