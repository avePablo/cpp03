/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pabalvar <pabalvar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 15:55:59 by pabalvar          #+#    #+#             */
/*   Updated: 2026/06/09 17:24:35 by pabalvar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap 
{
public:
    FragTrap( void );
    FragTrap( std::string const & name );
    FragTrap( FragTrap const & src );
    FragTrap & operator=( FragTrap const & rhs );
    ~FragTrap( void );

    void attack( std::string const & target );
    void highFivesGuys( void );
};

#endif
