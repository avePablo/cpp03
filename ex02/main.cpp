#include <iostream>
#include "FragTrap.hpp"

int main( void ) {
    FragTrap frag("FR4G-TP");

    frag.attack("Kragg");
    frag.takeDamage(15);
    frag.beRepaired(10);
    frag.highFivesGuys();
    return 0;
}
