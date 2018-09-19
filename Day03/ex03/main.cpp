/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 14:43:21 by ecloete           #+#    #+#             */
/*   Updated: 2018/06/08 16:30:29 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"


int main()
{
        std::srand(time(0));
    std::srand(time(0));

   std::cout << "------ LET THE GAMES BEGIN!! ------\n\n";
    ClapTrap clappy;
    FragTrap rubberDucky = FragTrap("Rubber Ducky");

    ScavTrap Scavvy = ScavTrap("Scavvy");

    NinjaTrap ninja1 = NinjaTrap("Ninja1");
    NinjaTrap ninja2 = NinjaTrap("Ninja2");

    ninja1.ninjaShoebox(ninja2);
    ninja1.ninjaShoebox(Scavvy);
    ninja1.ninjaShoebox(rubberDucky);
    ninja1.ninjaShoebox(clappy);

}