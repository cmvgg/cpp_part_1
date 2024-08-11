#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <string>
#include <cstdlib>
#include <string>

class Zombie {
private:
    std::string name;

public:
    Zombie(void);
    ~Zombie(void);
    void announce(void) const;
    void setName(const std::string& name);
};

Zombie* zombieHorde(int N, const std::string& name);
#endif 
