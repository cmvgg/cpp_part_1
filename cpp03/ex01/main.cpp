#include "ScavTrap.hpp"

int main() {
    ScavTrap a("Robo");
    ClapTrap b("Clap");
    ScavTrap tmp("Temporary");

    tmp.attack("target");
    std::cout << tmp.getName() << " has " << tmp.getHitPoints() << " hit points left." << std::endl;
    tmp.guardGate();
    
    return 0;
}
