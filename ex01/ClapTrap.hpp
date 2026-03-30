#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap {
public:
    ClapTrap( void );
    ClapTrap( std::string const & name );
    ClapTrap( ClapTrap const & src );
    ClapTrap & operator=( ClapTrap const & rhs );
    ~ClapTrap( void );

    void attack( std::string const & target );
    void takeDamage( unsigned int amount );
    void beRepaired( unsigned int amount );

protected:
    std::string _name;
    int _hitPoints;
    int _energyPoints;
    int _attackDamage;
};

#endif // CLAPTRAP_HPP
