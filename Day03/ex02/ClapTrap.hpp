/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 13:31:10 by ecloete           #+#    #+#             */
/*   Updated: 2018/06/08 16:11:09 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap {

    public:
    
        //constructors/destructors
        ClapTrap();
        ClapTrap(unsigned int hp, unsigned int mhp, unsigned int ep,
                   unsigned int mep, unsigned int level, unsigned int mdmg,
                   unsigned int rdmg, unsigned int armr);
        ClapTrap(std::string name, unsigned int hp, unsigned int mhp, unsigned int ep,
                   unsigned int mep, unsigned int level, unsigned int mdmg,
                   unsigned int rdmg, unsigned int armr);
        ClapTrap(ClapTrap const & src);
        ~ClapTrap();
        ClapTrap & 		operator=(ClapTrap const & src);

        //member functions

        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void vaulthunter_dot_exe(std::string const & target);
        void setName(std::string newName);

        //getters
        std::string getName() const;
        unsigned int getHitPoints() const;
        unsigned int getMaxHitPoints() const;
        unsigned int getEnergyPoints() const;
        unsigned int getMaxEnergyPoints() const;
        unsigned int getLevel() const;
        unsigned int getMeleeDmg() const;
        unsigned int getRangedDmg() const;
        unsigned int getArmorDmgReduction() const;

    protected:

        //variables
        std::string _name;
        unsigned int _hitPoints;
        unsigned int _maxHitPoints;
        unsigned int _energyPoints;
        unsigned int _maxEnergyPoints;
        unsigned int _level;
        unsigned int _meleeDmg;
        unsigned int _rangedDmg;
        unsigned int _armorDmgReduction;
};

#endif