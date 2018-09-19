/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 11:16:14 by ecloete           #+#    #+#             */
/*   Updated: 2018/06/10 16:28:49 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

#define NUM 20

#include "bullet.hpp"

#include <ncurses.h>
#include <ctime>
#include <cstdlib>
#include <string>

class Enemy : public Bullet
{
    public:

        int xLoc, yLoc, xMax,yMax;
		
		Enemy();
    	Enemy(WINDOW * win, int y, int x, char c);
		~Enemy(void);

        void display();
        void collision();
        void takeDmg();
		void spawn();
		int updateEnemy();

    protected:
		char character;
		int spawncount;
		WINDOW * curwin;
};

#endif