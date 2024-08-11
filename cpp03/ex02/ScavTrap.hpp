#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
    public:
        ScavTrap();
        ScavTrap(const string& _name);
        ScavTrap(const ScavTrap& other);
        virtual ~ScavTrap();

        ScavTrap& operator=(const ScavTrap& other);
        void guardGate(void);
};

#endif
