/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 16:09:19 by ecloete           #+#    #+#             */
/*   Updated: 2018/06/08 16:09:21 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

const unsigned int number = 5;

ScavTrap::ScavTrap() : 
            _name("ScavTrap")
            ,_hitPoints(100)
            ,_maxHitPoints(100)
            ,_energyPoints(50)
            ,_maxEnergyPoints(50)
            ,_level(1)
            ,_meleeDmg(20)
            ,_rangedDmg(15)
            ,_armorDmgReduction(3)
{
     std::cout << "\n[" << this->_name << "]" << " spawned...\n";
    return;
}

ScavTrap::ScavTrap(std::string name) : 
            _name(name)
            ,_hitPoints(100)
            ,_maxHitPoints(100)
            ,_energyPoints(50)
            ,_maxEnergyPoints(50)
            ,_level(1)
            ,_meleeDmg(20)
            ,_rangedDmg(15)
            ,_armorDmgReduction(3)
{
    std::cout << "\n[" << this->_name << "]" << " HAS RISEN!!!\n";
}

ScavTrap::ScavTrap(ScavTrap const & src) {
    *this = src;
    std::cout << "<" << this->_name << "> has been cloned\n";
}

ScavTrap &  ScavTrap::operator=(ScavTrap const & src) {
    this->_hitPoints = src.getHitPoints();
    this->_energyPoints = src.getEnergyPoints();
    this->_level = src.getLevel();
    this->_name = src.getName();
    return (*this);
}
        
const std::string ScavTrap::_challenges[number] = {
        "Dance battle! Or, you know... regular battle.",
        "Man versus machine! Very tiny streamlined machine!",
        "Care to have a friendly duel?",
        "I will prove to you my robotic superiority!",
        "You versus me! Me versus you! Either way!"
        };

ScavTrap::~ScavTrap()
{
    std::cout << "\n[" << this->_name  << "]" << " exited the field...\n";
}

void ScavTrap::rangedAttack(std::string const & target)
{
    std::cout << "\n[" << this->_name << "]" << " SNIPED " 
              << target + " with Sniper-5T0E! (-" 
              << this->_rangedDmg
              << ")\n";
}

void ScavTrap::meleeAttack(std::string const & target)
{
    std::cout << "\n[" << this->_name << "]" << " implaled "
              << target + " with a spear! (-" 
              << this->_meleeDmg
              << ")\n";   
}

void ScavTrap::takeDamage(unsigned int amount)
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
        std::cout << "\n[" << this->_name << "]" << " is dead.\n";
    }
}

void ScavTrap::beRepaired(unsigned int amount)
{

    if (this->_hitPoints == 0)
    {
        std::cout << "\n[" << this->_name << "]" << " has died, and cannot be healed.\n";
    }
    else if (this->_hitPoints == 100)
    {
         std::cout << "\n[" << this->_name << "]" <<  " is already full HP and cannot be healed! :)\n"; 
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

std::string ScavTrap::getName() const
{
    return this->_name;
}

unsigned int ScavTrap::getHitPoints() const
{
    return this->_hitPoints;
}

unsigned int ScavTrap::getMaxHitPoints() const
{
    return this->_maxHitPoints;
}

unsigned int ScavTrap::getEnergyPoints() const
{
    return this->_energyPoints;
}

unsigned int ScavTrap::getLevel() const
{
    return this->_level;
}

unsigned int ScavTrap::getMeleeDmg() const
{
    return this->_meleeDmg;
}

unsigned int ScavTrap::getRangedDmg() const
{
    return this->_rangedDmg;
}

unsigned int ScavTrap::getArmorDmgReduction() const
{
    return this->_armorDmgReduction;
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
    int randnum = std::rand() % number;
    std::cout << "\n[" + this->_name + "] "
              << this->_challenges[randnum] << " " + target
              << std::endl;

}
