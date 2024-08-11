#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
    hitPoint = 100;
    energyPoint = 50;
    attackDamage = 20;
    cout << "Default ScavTrap constructor called" << endl;
}

ScavTrap::ScavTrap(const string& _name) : ClapTrap(_name) {
    hitPoint = 100;
    energyPoint = 50;
    attackDamage = 20;
    cout << "Named ScavTrap constructor called" << endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other) {
    *this = other;
    cout << "ScavTrap copy constructor called" << endl;
}

ScavTrap::~ScavTrap() {
    cout << "ScavTrap destructor called" << endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other) {
    if (this != &other) {
        ClapTrap::operator=(other);
    }
    return *this;
}

void ScavTrap::guardGate() {
    cout << "ScavTrap " << name << " is now in Gatekeeper mode." << endl;
}
