/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 14:15:08 by ecloete           #+#    #+#             */
/*   Updated: 2018/06/08 16:31:08 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("CLAPTRAP")
            ,_hitPoints(100)
            ,_maxHitPoints(100)
            ,_energyPoints(100)
            ,_maxEnergyPoints(100)
            ,_level(1)
            ,_meleeDmg(30)
            ,_rangedDmg(20)
            ,_armorDmgReduction(5)
{
     std::cout << "\n[" << this->_name << "]" << " HAS ENTERED THE BATTLEFIELD\n";
    return;
}

ClapTrap::ClapTrap(unsigned int hp, unsigned int mhp, unsigned int ep,
                   unsigned int mep, unsigned int level, unsigned int mdmg,
                   unsigned int rdmg, unsigned int armr) : 
                   _name("SomeNewClapTrap"), _hitPoints(hp), _maxHitPoints(mhp), _energyPoints(ep),
                   _maxEnergyPoints(mep), _level(level), _meleeDmg(mdmg), _rangedDmg(rdmg),
                   _armorDmgReduction(armr)
{
    std::cout << "\n[" << this->_name << "]" << " CLAPTRAP CONSTRUCTED!!!\n";
}

ClapTrap::ClapTrap(std::string name, unsigned int hp, unsigned int mhp, unsigned int ep,
                   unsigned int mep, unsigned int level, unsigned int mdmg,
                   unsigned int rdmg, unsigned int armr) : 
                   _name(name), _hitPoints(hp), _maxHitPoints(mhp), _energyPoints(ep),
                   _maxEnergyPoints(mep), _level(level), _meleeDmg(mdmg), _rangedDmg(rdmg),
                   _armorDmgReduction(armr)
{
    std::cout << "\n[" << this->_name << "]" << " CLAPTRAP CONSTRUCTED!!!\n";
}

ClapTrap::ClapTrap(ClapTrap const & src) {
    *this = src;
    std::cout << "<" << this->_name << "> HAS BEEN CLONED\n";
}

ClapTrap &  ClapTrap::operator=(ClapTrap const & src) {
    this->_hitPoints = src.getHitPoints();
    this->_energyPoints = src.getEnergyPoints();
    this->_level = src.getLevel();
    this->_name = src.getName();
    return (*this);
}

ClapTrap::~ClapTrap()
{
    std::cout << "\n[" << this->_name  << "]" << " CLAPTRAP BYE BYE!\n";
}

void ClapTrap::rangedAttack(std::string const & target)
{
    std::cout << "\n[" << this->_name << "]" << " SNIPED " 
              << target + " with Sniper-5T0E! (-" 
              << this->_rangedDmg
              << ")\n";
}

void ClapTrap::meleeAttack(std::string const & target)
{
    std::cout << "\n[" << this->_name << "]" << " implaled "
              << target + " with a spear! (-" 
              << this->_meleeDmg
              << ")\n";   
}

void ClapTrap::takeDamage(unsigned int amount)
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

void ClapTrap::beRepaired(unsigned int amount)
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

std::string ClapTrap::getName() const
{
    return this->_name;
}

unsigned int ClapTrap::getHitPoints() const
{
    return this->_hitPoints;
}

unsigned int ClapTrap::getMaxHitPoints() const
{
    return this->_maxHitPoints;
}

unsigned int ClapTrap::getEnergyPoints() const
{
    return this->_energyPoints;
}

unsigned int ClapTrap::getLevel() const
{
    return this->_level;
}

unsigned int ClapTrap::getMeleeDmg() const
{
    return this->_meleeDmg;
}

unsigned int ClapTrap::getRangedDmg() const
{
    return this->_rangedDmg;
}

unsigned int ClapTrap::getArmorDmgReduction() const
{
    return this->_armorDmgReduction;
}
