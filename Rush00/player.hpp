/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   player.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 21:47:33 by ecloete           #+#    #+#             */
/*   Updated: 2018/06/10 16:28:20 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLAYER_HPP

# define PLAYER_HPP

#include <ncurses.h>
#include <iostream>
#include <string>
#include <unistd.h>

#include "bullet.hpp"
#include "enemy.hpp"

class Player
{
	public:
		Player(WINDOW * win, int y, int x, char c);
		~Player(void);

		int xLoc, yLoc, xMax,yMax;

		void moveUP();
		void moveDOWN();
		void moveLEFT();
		void moveRIGHT();
		int getMOVE();
		int getScore();
		void setScore(int score);
		void display();
		void Shoot();
		void bullet();

	private:
		char character;
		int _lives;
		int _score;
		WINDOW * curwin;
};

#endif