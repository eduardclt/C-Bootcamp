/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 11:16:04 by ecloete           #+#    #+#             */
/*   Updated: 2018/06/10 16:29:03 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "enemy.hpp"

Enemy::Enemy()
{
	
}

Enemy::Enemy(WINDOW * win, int y, int x, char c)
{
	curwin = win;
	yLoc = y;
	xLoc = x;
	getmaxyx(curwin, yMax,xMax);
	character = c;
	// std::srand(time(0));
}

Enemy::~Enemy(void)
{
	return ;
}

void Enemy::display()
{
	mvwaddch(curwin, yLoc, xLoc, character);
}

int Enemy::updateEnemy()
{
	this->yLoc = this->yLoc + 1;
	return this->yLoc;
}

// void Enemy::movedown()
// {
	
// }

// void Enemy::spawn()
// {
// 	WINDOW * playwin = newwin(0,95,(yMax/2)-30,80);
	
// 	int randomX = (std::rand() % 96)  + 2;
// 	if (spawncount == 7){
// 		spawncount = 0;
// 	}
// 	if (spawncount % 2 == 0)
// 	{
// 		randomX = (std::rand() % 96) + 2;
// 		Enemy *e = new Enemy(playwin,1, randomX, 'v');
// 		e->display();
		
// 	}
// 	// if (spawncount == 6)
// 	// {
// 	// 	randomX = std::rand() % 96;
// 	// 	Enemy *e = new Enemy(playwin,1, randomX, '#');
// 	// 	e->display();
		
// 	// }
// 	spawncount++;
// }

// 	// move(10, 10);
// 	// std::string score = "SCORE: ";
// 	// for(int i = 0; i < score.size(); i++) {
// 	// 	addch(score[i]);
// 	// 	addch(' ');
// 	// }

// 	// move(12, 10);
// 	// std::string lives = "LIVES: ";
// 	// for(int i = 0; i < lives.size(); i++) {
// 	// 	addch(lives[i]);
// 	// 	addch(' ');
// 	// }

// 	// move(14, 10);
// 	// std::string tyd = "TIME: ";
// 	// for(int i = 0; i < tyd.size(); i++) {
// 	// 	addch(tyd[i]);
// 	// 	addch(' ');
// 	// }
// 	// refresh();