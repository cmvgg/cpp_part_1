#ifndef ZOMBIE_CLASS_HPP
#define ZOMBIE_CLASS_HPP

#include <iostream>
#include <string>

class Zombie {
private:
    std::string _name;

public:
    Zombie(std::string name);
    ~Zombie(void);
    void announce(void) const;
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
