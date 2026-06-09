/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalvar <pabalvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 15:55:22 by pabalvar          #+#    #+#             */
/*   Updated: 2026/06/09 17:23:20 by pabalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void )
    : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0) 
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap( std::string const & name )
    : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0) 
{
    std::cout << "ClapTrap " << _name << " constructor called" << std::endl;
}

ClapTrap::ClapTrap( ClapTrap const & src )
    : _name(src._name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints), _attackDamage(src._attackDamage) 
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
}

ClapTrap & ClapTrap::operator=( ClapTrap const & rhs ) 
{
    std::cout << "ClapTrap copy assignment operator called" << std::endl;
    if ( this != &rhs ) {
        _name = rhs._name;
        _hitPoints = rhs._hitPoints;
        _energyPoints = rhs._energyPoints;
        _attackDamage = rhs._attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap( void ) 
{
    std::cout << "ClapTrap " << _name << " destructor called" << std::endl;
}

void ClapTrap::attack( std::string const & target ) 
{
    if ( _hitPoints <= 0 ) {
        std::cout << "ClapTrap " << _name << " cannot attack because it has no hit points left!" << std::endl;
        return;
    }
    if ( _energyPoints <= 0 ) {
        std::cout << "ClapTrap " << _name << " cannot attack because it has no energy left!" << std::endl;
        return;
    }
    --_energyPoints;
    std::cout << "ClapTrap " << _name << " attacks " << target
              << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage( unsigned int amount ) 
{
    if ( _hitPoints <= 0 ) {
        std::cout << "ClapTrap " << _name << " is already destroyed!" << std::endl;
        return;
    }
    _hitPoints -= static_cast<int>( amount );
    if ( _hitPoints < 0 )
        _hitPoints = 0;
    std::cout << "ClapTrap " << _name << " takes " << amount << " points of damage!" << std::endl;
}

void ClapTrap::beRepaired( unsigned int amount ) 
{
    if ( _hitPoints <= 0 ) {
        std::cout << "ClapTrap " << _name << " cannot repair because it has no hit points left!" << std::endl;
        return;
    }
    if ( _energyPoints <= 0 ) {
        std::cout << "ClapTrap " << _name << " cannot repair because it has no energy left!" << std::endl;
        return;
    }
    --_energyPoints;
    _hitPoints += static_cast<int>( amount );
    std::cout << "ClapTrap " << _name << " repairs itself, recovering " << amount << " hit points!" << std::endl;
}
