/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 16:08:55 by ecloete           #+#    #+#             */
/*   Updated: 2018/06/08 16:08:57 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::srand(time(0));
    std::srand(time(0));

    std::cout << "------ LET THE GAMES BEGIN!! ------\n\n";
    FragTrap fragTrap;
    FragTrap rubberDucky = FragTrap("Rubber Ducky");

    ScavTrap Scavvy = ScavTrap("Scavvy");
    ScavTrap Dino = ScavTrap("DIN0");

    std::cout << "\n\n------ ATTTAAAACCCCKKK!! ------\n\n";
    fragTrap.meleeAttack(Scavvy.getName());
    Scavvy.takeDamage(fragTrap.getMeleeDmg());

    Dino.rangedAttack(rubberDucky.getName());
    rubberDucky.takeDamage(Dino.getRangedDmg());

    Dino.rangedAttack(rubberDucky.getName());
    rubberDucky.takeDamage(Dino.getRangedDmg());

    rubberDucky.beRepaired(20);
    Scavvy.beRepaired(100);
    Scavvy.beRepaired(100);

    Dino.challengeNewcomer(fragTrap.getName());
    Scavvy.challengeNewcomer(fragTrap.getName());
    
    fragTrap.vaulthunter_dot_exe(Dino.getName());

    Dino.takeDamage(900);
    rubberDucky.vaulthunter_dot_exe(Scavvy.getName());
    Scavvy.takeDamage(900);






    return 0;
}