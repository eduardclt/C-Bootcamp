/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 21:47:41 by ecloete           #+#    #+#             */
/*   Updated: 2018/06/10 16:28:26 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "player.hpp"


Player::Player(WINDOW * win, int y, int x, char c) : _score(0) //_lives(3) 
{ 
	curwin = win;
	yLoc = y;
	xLoc = x;
	getmaxyx(curwin, yMax,xMax);
	keypad(curwin, true);
	character = c;
}

Player::~Player(void)
{
	return ;
}

void Player::moveUP()
{
	mvwaddch(curwin,yLoc,xLoc, ' ');
	yLoc--;
	if (yLoc < 1)
		yLoc=1;
}

void Player::moveDOWN()
{
	mvwaddch(curwin,yLoc,xLoc, ' ');
	yLoc++;
	if (yLoc > yMax-2)
		yLoc=yMax-2;
}

void Player::moveLEFT()
{
	mvwaddch(curwin,yLoc,xLoc, ' ');
	xLoc--;
	if(xLoc < 1)
		xLoc = 1;
}

void Player::moveRIGHT()
{
	mvwaddch(curwin,yLoc,xLoc, ' ');
	xLoc++;
	if (xLoc > xMax -2)
		xLoc = xMax -2;
}

void Player::bullet()
{
	int bxLoc = xLoc;
	int byLoc = yLoc - 1; // y-moves
	mvwaddch(curwin,byLoc,bxLoc, '|');
	byLoc--;
	if (byLoc < 1)
	{
		byLoc = clear();
	}
}

// void Player::Shoot()
// {
// 	Player *bullet = new Player(curwin, yLoc,xLoc,'|');

// 	bullet->bullet();
// 	// mvwaddch(curwin,byLoc,bxLoc, '|');
// 	// byLoc-=2;
// 	nodelay(curwin,true);
// 	// if (byLoc > 1)
// 		// byLoc=1;
// }

int Player::getMOVE()
{
	int choice = wgetch(curwin);
	switch(choice)
	{
		case KEY_UP:
			moveUP();
			break;
		case KEY_DOWN:
			moveDOWN();
			break;
		case KEY_LEFT:
			moveLEFT();
			break;
		case KEY_RIGHT:
			moveRIGHT();
			break;
		case 32:
			// bullet();
			return (32);
			break;
		default:
			break;
	}
	// std::cout<< choice<<std::endl;
	return choice;
}

void Player::display()
{
	mvwaddch(curwin, yLoc, xLoc, character);
}

int Player::getScore()
{
	return this->_score;
}

void Player::setScore( int score)
{
	this->_score = score;
}