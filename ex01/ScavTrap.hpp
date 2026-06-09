/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalvar <pabalvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 15:55:42 by pabalvar          #+#    #+#             */
/*   Updated: 2026/06/09 17:17:25 by pabalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {
public:
    ScavTrap( void );
    ScavTrap( std::string const & name );
    ScavTrap( ScavTrap const & src );
    ScavTrap & operator=( ScavTrap const & rhs );
    ~ScavTrap( void );

    void attack( std::string const & target );
    void guardGate( void );
};

#endif
