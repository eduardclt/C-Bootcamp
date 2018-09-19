/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 15:50:02 by ecloete           #+#    #+#             */
/*   Updated: 2018/06/08 16:30:05 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

class NinjaTrap : public ClapTrap {

    public:
    
        NinjaTrap();
        NinjaTrap(std::string name);
        NinjaTrap(NinjaTrap const & src);
        ~NinjaTrap();
        NinjaTrap & 		operator=(NinjaTrap const & src);

        void ninjaShoebox(ClapTrap const & src);
        void ninjaShoebox(FragTrap const & src);
        void ninjaShoebox(ScavTrap const & src);
        void ninjaShoebox(NinjaTrap const & src);
};

#endif