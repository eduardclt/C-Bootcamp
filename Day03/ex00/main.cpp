/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 16:08:15 by ecloete           #+#    #+#             */
/*   Updated: 2018/06/08 16:28:58 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    std::srand(time(0));
    std::srand(time(0));

    std::cout << "<THE BATTLE IS ABOUT TO BEGIN>\n\n";
    FragTrap fragTrap;
    FragTrap Bitch = FragTrap("Bi7ch");
    FragTrap frikkie = FragTrap("Fr1kk1e");
    FragTrap frikkie2 = FragTrap(frikkie);

    fragTrap.meleeAttack(Bitch.getName());
    Bitch.takeDamage(fragTrap.getMeleeDmg());
    frikkie.rangedAttack(fragTrap.getName());
    fragTrap.takeDamage(frikkie.getRangedDmg());
    fragTrap.beRepaired(10);
    Bitch.beRepaired(50);
    frikkie.beRepaired(12);

    Bitch.vaulthunter_dot_exe(frikkie.getName());
    frikkie.takeDamage(99);
    frikkie.vaulthunter_dot_exe(fragTrap.getName());
    fragTrap.takeDamage(80);
    fragTrap.vaulthunter_dot_exe(Bitch.getName());
    Bitch.takeDamage(999);


    return 0;
}