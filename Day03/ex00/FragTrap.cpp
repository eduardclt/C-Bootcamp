/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 16:07:52 by ecloete           #+#    #+#             */
/*   Updated: 2018/06/08 16:08:10 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

const unsigned int number = 5;

FragTrap::FragTrap() : 
            _name("FR4G-TP")
            ,_hitPoints(100)
            ,_maxHitPoints(100)
            ,_energyPoints(100)
            ,_maxEnergyPoints(100)
            ,_level(1)
            ,_meleeDmg(30)
            ,_rangedDmg(20)
            ,_armorDmgReduction(5)
{
     std::cout << "\n[" << this->_name << "]" << " has entered the battlefield...\n";
    return;
}

FragTrap::FragTrap(std::string name) : 
            _name(name)
            ,_hitPoints(100)
            ,_maxHitPoints(100)
            ,_energyPoints(100)
            ,_maxEnergyPoints(100)
            ,_level(1)
            ,_meleeDmg(30)
            ,_rangedDmg(20)
            ,_armorDmgReduction(5)
{
    std::cout << "\n[" << this->_name << "]" << " IS ALIIIIVEEEE!!!\n";
}

FragTrap::FragTrap(FragTrap const & src) {
    *this = src;
    std::cout << "<" << this->_name << ">Recompiling my combat code!\n";
}

FragTrap &  FragTrap::operator=(FragTrap const & src) {
    this->_hitPoints = src.getHitPoints();
    this->_energyPoints = src.getEnergyPoints();
    this->_level = src.getLevel();
    this->_name = src.getName();
    return (*this);
}
        
const std::string FragTrap::_actions[number] = {
        "'sploded",
        "Stunned",
        "Water-Ballooned",
        "Round-house-kicked",
        "Nuked"
        };

FragTrap::~FragTrap()
{
    std::cout << "\n[" << this->_name  << "]" << " has left the Battlefielfd\n";
}

void FragTrap::rangedAttack(std::string const & target)
{
    std::cout << "\n[" << this->_name << "]" << " REKT " 
              << target + " with a Crossbow R6tJ! (-" 
              << this->_rangedDmg
              << ")\n";
}

void FragTrap::meleeAttack(std::string const & target)
{
    std::cout << "\n[" << this->_name << "]" << " INJURED "
              << target + " with a Panga! (-" 
              << this->_meleeDmg 
              << ")\n";   
}

void FragTrap::takeDamage(unsigned int amount)
{
    amount = amount - this->_armorDmgReduction;
    if (amount < this->_hitPoints)
    {
        std::cout << "\n[" << this->_name << "]" << " lost " << amount << " HP \n";
        this->_hitPoints = this->_hitPoints - amount;
    }
    else
    {
        this->_hitPoints = 0;
        std::cout << "\n[" << this->_name << "]" << " No, nononono NO!... R.I.P :( \n";
    }
}

void FragTrap::beRepaired(unsigned int amount)
{

    if (this->_hitPoints == 0)
    {
        std::cout << "\n[" << this->_name << "]" << " has died, and cannot be healed.\n";
    }
    else if (this->_hitPoints == 100)
    {
         std::cout << "\n[" << this->_name << "]" <<  " is already full HP and cannot be healed! :)\n" << std::endl; 
    }
    else if (this->_hitPoints + amount > 100)
    {
        int prev = this->_hitPoints;
        this->_hitPoints = 100;
        std::cout << "\n[" << this->_name << "]" << " bandaged itself for " << this->_hitPoints - prev << " HP \n";    
    }
    else
    {
        this->_hitPoints = this->_hitPoints + amount;
        std::cout << "\n[" << this->_name << "]" << " bandaged itself for " << amount << " HP \n";    
    }
}

std::string FragTrap::getName() const
{
    return this->_name;
}

unsigned int FragTrap::getHitPoints() const
{
    return this->_hitPoints;
}

unsigned int FragTrap::getMaxHitPoints() const
{
    return this->_maxHitPoints;
}

unsigned int FragTrap::getEnergyPoints() const
{
    return this->_energyPoints;
}

unsigned int FragTrap::getLevel() const
{
    return this->_level;
}

unsigned int FragTrap::getMeleeDmg() const
{
    return this->_meleeDmg;
}

unsigned int FragTrap::getRangedDmg() const
{
    return this->_rangedDmg;
}

unsigned int FragTrap::getArmorDmgReduction() const
{
    return this->_armorDmgReduction;
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
    int randnum = std::rand() % number;

    if (this->_energyPoints < 25)
    {
        std::cout << "[" + this->_name + "] Not enough energy points...." 
                  << "(" << this->_energyPoints << " EP)";
    }
    else
    {
        std::cout << "\n[" + this->_name + "] "
              << this->_actions[randnum] << " " + target
              << std::endl;
	    this->_energyPoints -= this->_energyPoints - 25;
    }
}
