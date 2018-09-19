/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 16:08:03 by ecloete           #+#    #+#             */
/*   Updated: 2018/06/08 16:08:08 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include <iostream>

class FragTrap {

    public:
    
        //constructors/destructors
        FragTrap();
        FragTrap(std::string name);
        FragTrap(FragTrap const & src);
        ~FragTrap();
        FragTrap & 		operator=(FragTrap const & src);

        //member functions
        void rangedAttack(std::string const & target);
        void meleeAttack(std::string const & target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
        void vaulthunter_dot_exe(std::string const & target);

        
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

        static const std::string _actions[];

};

#endif