/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 12:01:13 by ecloete           #+#    #+#             */
/*   Updated: 2018/06/08 16:09:40 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include <iostream>

class ScavTrap {

    public:
    
        //constructors/destructors
        ScavTrap();
        ScavTrap(std::string name);
        ScavTrap(ScavTrap const & src);
        ~ScavTrap();
        ScavTrap & 		operator=(ScavTrap const & src);

        //member functions
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void challengeNewcomer(std::string const & target);

        
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

    private:

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

        static const std::string _challenges[];

};

#endif