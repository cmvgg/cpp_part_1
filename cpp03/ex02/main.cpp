#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main() {
    FragTrap frag("Frag");
    ScavTrap scav("Scav");
    ClapTrap clap("Clap");

    frag.attack("target");
    frag.highFivesGuys();

    scav.attack("target");
    scav.guardGate();

    clap.attack("target");

    return 0;
}
