/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalvar <pabalvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 15:55:40 by pabalvar          #+#    #+#             */
/*   Updated: 2026/06/09 15:55:41 by pabalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap( void ) : ClapTrap() {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap( std::string const & name ) : ClapTrap( name ) {
    _hitPoints = 100;
    _energyPoints = 50;
    _attackDamage = 20;
    std::cout << "ScavTrap " << _name << " constructor called" << std::endl;
}

ScavTrap::ScavTrap( ScavTrap const & src ) : ClapTrap( src ) {
    std::cout << "ScavTrap copy constructor called" << std::endl;
}

ScavTrap & ScavTrap::operator=( ScavTrap const & rhs ) {
    std::cout << "ScavTrap copy assignment operator called" << std::endl;
    if ( this != &rhs ) {
        ClapTrap::operator=( rhs );
    }
    return *this;
}

ScavTrap::~ScavTrap( void ) {
    std::cout << "ScavTrap " << _name << " destructor called" << std::endl;
}

void ScavTrap::attack( std::string const & target ) {
    if ( _hitPoints <= 0 ) {
        std::cout << "ScavTrap " << _name << " cannot attack because it has no hit points left!" << std::endl;
        return;
    }
    if ( _energyPoints <= 0 ) {
        std::cout << "ScavTrap " << _name << " cannot attack because it has no energy left!" << std::endl;
        return;
    }
    --_energyPoints;
    std::cout << "ScavTrap " << _name << " attacks " << target
              << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate( void ) {
    std::cout << "ScavTrap " << _name << " has entered Gate keeper mode." << std::endl;
}
