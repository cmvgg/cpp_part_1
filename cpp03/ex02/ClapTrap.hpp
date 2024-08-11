#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

using std::string;
using std::cout;
using std::endl;

class ClapTrap {
    protected:
        string name;
        unsigned int hitPoint;
        unsigned int energyPoint;
        unsigned int attackDamage;

    public:
        ClapTrap();
        ClapTrap(const string& _name);
        ClapTrap(const ClapTrap& other);
        virtual ~ClapTrap();

        ClapTrap& operator=(const ClapTrap& other);

        virtual void attack(const string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);

        const string& getName() const;
        unsigned int getHitPoint() const;
        unsigned int getEnergyPoint() const;
        unsigned int getAttackDamage() const;
};

#endif
