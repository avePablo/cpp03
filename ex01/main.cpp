#include <iostream>
#include "ScavTrap.hpp"

int main( void ) {
    ClapTrap clap("CL4P-TP");
    ScavTrap scav("SC4V-TP");

    clap.attack("Bandit");
    clap.takeDamage(3);
    clap.beRepaired(5);

    scav.attack("Psycho");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();
    return 0;
}
