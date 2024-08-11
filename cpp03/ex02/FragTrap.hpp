#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
    public:
        FragTrap();
        FragTrap(const string& _name);
        FragTrap(const FragTrap& other);
        virtual ~FragTrap();

        FragTrap& operator=(const FragTrap& other);
        void highFivesGuys(void);
};

#endif
