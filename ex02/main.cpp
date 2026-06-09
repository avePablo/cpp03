/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalvar <pabalvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 15:56:02 by pabalvar          #+#    #+#             */
/*   Updated: 2026/06/09 15:57:16 by pabalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
