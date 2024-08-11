#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon {
private:
    std::string type;

public:
    Weapon(const std::string& str);
    ~Weapon();
    std::string getType() const;
    void setType(const std::string& str);
};

#endif
