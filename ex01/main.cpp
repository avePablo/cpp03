/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalvar <pabalvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 15:55:31 by pabalvar          #+#    #+#             */
/*   Updated: 2026/06/09 18:22:49 by pabalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ScavTrap.hpp"

int main( void ) 
{
    ClapTrap clap("CLAP");
    ScavTrap scav("SCAV");

    clap.attack("Bandit");
    clap.takeDamage(3);
    clap.beRepaired(5);

    scav.attack("Psycho");
    scav.takeDamage(20);
    scav.beRepaired(10);
    scav.guardGate();
    return 0;
}
