#include <iostream>
#include "ClapTrap.hpp"

int main( void ) {
    ClapTrap clap("CL4P-TP");

    clap.attack("Bandit");
    clap.takeDamage(5);
    clap.beRepaired(3);
    clap.takeDamage(10);
    clap.attack("Skag");
    clap.beRepaired(1);
    return 0;
}
