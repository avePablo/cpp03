/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalvar <pabalvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 15:55:55 by pabalvar          #+#    #+#             */
/*   Updated: 2026/06/09 15:55:56 by pabalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap( void ) : ClapTrap() {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap( std::string const & name ) : ClapTrap( name ) {
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap " << _name << " constructor called" << std::endl;
}

FragTrap::FragTrap( FragTrap const & src ) : ClapTrap( src ) {
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap & FragTrap::operator=( FragTrap const & rhs ) {
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    if ( this != &rhs ) {
        ClapTrap::operator=( rhs );
    }
    return *this;
}

FragTrap::~FragTrap( void ) {
    std::cout << "FragTrap " << _name << " destructor called" << std::endl;
}

void FragTrap::attack( std::string const & target ) {
    if ( _hitPoints <= 0 ) {
        std::cout << "FragTrap " << _name << " cannot attack because it has no hit points left!" << std::endl;
        return;
    }
    if ( _energyPoints <= 0 ) {
        std::cout << "FragTrap " << _name << " cannot attack because it has no energy left!" << std::endl;
        return;
    }
    --_energyPoints;
    std::cout << "FragTrap " << _name << " attacks " << target
              << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys( void ) {
    std::cout << "FragTrap " << _name << " requests a high five!" << std::endl;
}
