#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap() {
    hitPoint = 100;
    energyPoint = 100;
    attackDamage = 30;
    cout << "Default FragTrap constructor called" << endl;
}

FragTrap::FragTrap(const string& _name) : ClapTrap(_name) {
    hitPoint = 100;
    energyPoint = 100;
    attackDamage = 30;
    cout << "Named FragTrap constructor called" << endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other) {
    *this = other;
    cout << "FragTrap copy constructor called" << endl;
}

FragTrap::~FragTrap() {
    cout << "FragTrap destructor called" << endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

void FragTrap::highFivesGuys() {
    cout << "FragTrap " << name << " requests a high five from everyone!" << endl;
}
