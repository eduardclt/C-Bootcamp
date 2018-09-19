/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 14:15:31 by ecloete           #+#    #+#             */
/*   Updated: 2018/06/08 16:10:34 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

const unsigned int number = 5;

ScavTrap::ScavTrap() : ClapTrap(100, 100, 50, 50, 1, 20, 15, 3)
{
    this->_name = "SC$V-TP";
    std::cout << "\nSCAVTRAP ->[" << this->_name << "]" << " spawned....\n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name, 100, 100, 50, 50, 1, 20, 15, 3)
{
    std::cout << "\nSCAVTRAP ->[" << this->_name << "]" << " HAS RISEN!!!\n";
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

void ScavTrap::challengeNewcomer(std::string const & target)
{
    int randnum = std::rand() % number;
    std::cout << "\n[" + this->_name + "] "
              << this->_challenges[randnum] << " " + target
              << std::endl;

}
