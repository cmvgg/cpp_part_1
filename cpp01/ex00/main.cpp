#include "Zombie.hpp"

int main(void) {
    Zombie stackZombie("zombie 0 stack");

    stackZombie.announce();

    Zombie *heapZombie = newZombie("zombie 1 heap");
    heapZombie->announce();
    delete heapZombie;

    randomChump("zombie 2 stack");

    return 0;
}