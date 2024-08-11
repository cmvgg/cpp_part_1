#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <string>
#include <iostream>

class HumanB {
private:
    std::string name;
    Weapon* weapon;

public:
    HumanB(const std::string& str);
    ~HumanB();
    void setWeapon(Weapon& weaponObj);
    void attack() const;
};

#endif