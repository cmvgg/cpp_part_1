#include "ClapTrap.hpp"

int main() {
    ClapTrap a("Bob");
    ClapTrap b("John");
    ClapTrap c;

    a.attack("the best target");
    a.takeDamage(1);
    a.beRepaired(101);

    return 0;
}
