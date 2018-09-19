/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 14:15:19 by ecloete           #+#    #+#             */
/*   Updated: 2018/06/08 16:30:41 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

const unsigned int number = 5;

FragTrap::FragTrap() : ClapTrap(100, 100, 100, 100, 1, 30, 20, 5)
{
    this->_name = "FR4G-TP";
    std::cout << "\nFRAGTRAP ->[" << this->_name << "]" << " has arrived\n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name, 100, 100, 100, 100, 1, 30, 20, 5)
{
    std::cout << "\nFRAGTRAP ->[" << this->_name << "]" << " IS ALIIIIVEEEE!!!\n";
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