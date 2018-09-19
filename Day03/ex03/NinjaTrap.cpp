/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 15:50:13 by ecloete           #+#    #+#             */
/*   Updated: 2018/06/08 16:30:12 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap() : ClapTrap(60, 60, 120, 120, 1, 60, 5, 0)
{
    this->_name = "N1NJ4-TP";
    std::cout << "\nNinjaTrap ->[" << this->_name << "]" << " just walked in...\n";
}

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
    std::cout << "\nNinjaTrap ->[" << this->_name << "]" << " I'm here..\n";
}

NinjaTrap::NinjaTrap(NinjaTrap const & src) {
    *this = src;
    std::cout << "<" << this->_name << "> has reassembled himself\n";
}

NinjaTrap &  NinjaTrap::operator=(NinjaTrap const & src) {
    this->_hitPoints = src.getHitPoints();
    this->_energyPoints = src.getEnergyPoints();
    this->_level = src.getLevel();
    this->_name = src.getName();
    return (*this);
}

NinjaTrap::~NinjaTrap()
{
    std::cout << "\n[" << this->_name  << "]" << " decided to pack his bags and visit his Mom... \n";
}

void NinjaTrap::ninjaShoebox(ClapTrap const & src)
{
    std::cout << "\n[" << this->_name << "]" << " to " + src.getName() << ": Some days, you just can't get rid of an obscure pop-culture reference.\n";
}

void NinjaTrap::ninjaShoebox(FragTrap const & src)
{
    std::cout << "\n[" << this->_name << "]" << " to " + src.getName() << ": Times like these, I really start to question the meaning of my existence. Then I get distra-hey! What's this? This looks cool! \n";
}

void NinjaTrap::ninjaShoebox(ScavTrap const & src)
{
    std::cout << "\n[" << this->_name << "]" << " to " + src.getName() << ": Does this mean I can start dancing? Pleeeeeeaaaaase?\n";
}

void NinjaTrap::ninjaShoebox(NinjaTrap const & src)
{
    std::cout << "\n[" << this->_name << "]" << " to " + src.getName() << ": Who needs memories when I can do all this cool stuff? Stuff that I currently am not doing! That's what I'd like to call a 'hint'. \n";
}

