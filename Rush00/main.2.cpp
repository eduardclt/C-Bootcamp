/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.2.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecloete <ecloete@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/08 21:47:38 by ecloete           #+#    #+#             */
/*   Updated: 2018/06/10 16:28:39 by ecloete          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "player.hpp"
#include <unistd.h>
#include "enemy.hpp"
#include <ncurses.h>
#include <stdlib.h>
#include <stdio.h>

int main()
{
	// ncurses start
	initscr();
	noecho();
	cbreak();
	std::srand(time(0));
	curs_set(0);

	// get screen size
	int yMax = 0;
	int xMax = 0;
	int y = yMax + 1;
	int	spawncount = 0;
	getmaxyx(stdscr, yMax,xMax);

	// create window for input
	WINDOW * playwin = newwin(0,95,(yMax/2)-30,80);
	Player *p = new Player(playwin,60, 50, '^');
	nodelay(playwin, true);
	box(playwin,0,0);

	refresh();

	p->display();
	spawncount++;
	Bullet bullet[NUM];
	Enemy enemy[NUM];
	Enemy object[NUM];
	Enemy stars[NUM * 10];
	while(1)
	{
		usleep(20000);
		p->display();
		refresh();
		wrefresh(playwin);
		int x;
		spawncount++;

	mvwprintw(playwin, 1, 1, "SCORE: ");		
	int r = p->getScore();
	std::string highscore = std::to_string(r);
    mvwprintw(playwin, 1, 8, highscore.c_str());
    

			
		//bullet-------------------------------------------------------

		if ((x = p->getMOVE()) == 27)
			break;
		if (x == 32)
		{
			for (x = 0; bullet[x].is_active == true; x++){}
			if (x < NUM)
			{
				bullet[x].xLoc = p->xLoc;
				bullet[x].yLoc = p->yLoc - 1;
				bullet[x].setAttr(2);
				mvwaddch(playwin, bullet[x].yLoc , bullet[x].xLoc , ':');
			}
		}
		for (int y = 0; y < NUM; y++)
		{
			if (bullet[y].is_active == true)
			{
				if (bullet[y].yLoc > 1)
				{
					bullet[y].yLoc  = bullet[y].yLoc  - 1;
					bullet[y].setAttr(2);
					mvwaddch(playwin, bullet[y].yLoc + 1, bullet[y].xLoc, ' ');
					mvwaddch(playwin, bullet[y].yLoc, bullet[y].xLoc, ':');
				}
				else if (bullet[y].yLoc == 1 )
				{
					bullet[y].is_active = false;
					mvwaddch(playwin, bullet[y].yLoc, bullet[y].xLoc, ' ');
				}
			}

		}
		//Enemy------------------------------------------------------

		if (spawncount == 50)
		{
			spawncount = 0;
		}
		if (spawncount % 50 == 0)
		{
			int randomX = (std::rand() % 90) + 2;
			for (x = 0; enemy[x].is_active == true; x++){}
			if (x < NUM)
			{
				enemy[x].xLoc = randomX;
				enemy[x].yLoc = y;
				enemy[x].setAttr(2);
				mvwaddch(playwin, enemy[x].yLoc, enemy[x].yLoc , 'W');
			}
				
		}if (spawncount % 10 == 0)
		{
		for (int y = 0; y < NUM; y++)
			{
				if (enemy[y].is_active == true)
				{
					if (enemy[y].yLoc < yMax)
					{
						enemy[y].yLoc = enemy[y].yLoc + 1;
						enemy[y].setAttr(2);
						mvwaddch(playwin, enemy[y].yLoc - 1, enemy[y].xLoc, ' ');
						mvwaddch(playwin, enemy[y].yLoc, enemy[y].xLoc, 'W');
					}
					if (enemy[y].yLoc == 60)
					{
						mvwaddch(playwin, enemy[y].yLoc, enemy[y].xLoc, ' ');
						enemy[y].is_active = false;
					}
					if (enemy[y].yLoc == p->yLoc && enemy[y].xLoc == p->xLoc)
					{
						clear();
						mvwaddch(playwin, enemy[y].yLoc, enemy[y].xLoc, ' ');
						enemy[y].is_active = false;
                        endwin();
						return(27);
					}
					for( int k = 0; k < NUM; k++)
					{
						if (bullet[k].yLoc == enemy[y].yLoc && bullet[k].xLoc == enemy[y].xLoc)
						{
							mvwaddch(playwin, bullet[k].yLoc, bullet[k].xLoc, ' ');
							bullet[k].is_active = false;
							mvwaddch(playwin, enemy[y].yLoc, enemy[y].xLoc, ' ');
							enemy[y].is_active = false;
							int score = p->getScore();
							score+=100;
							p->setScore(score);
						}
					}
				}
				wrefresh(playwin);
			}

		}

		//Objects--------------------------------------------------------
		
		if (spawncount % 50 == 0){
		int otherRandomX = (std::rand() % 90) + 2;
			for (x = 0; object[x].is_active == true; x++){}
			if (x < NUM)
			{
				object[x].xLoc = otherRandomX;
				object[x].yLoc = y;
				object[x].setAttr(2);
				mvwaddch(playwin, object[x].yLoc, object[x].xLoc , 'O');
			}
				
		}if (spawncount % 25 == 0)
		{
		for (int y = 0; y < NUM; y++)
			{
				if (object[y].is_active == true)
				{
					if (object[y].yLoc < yMax)
					{
						object[y].yLoc = object[y].yLoc + 1;
						object[y].setAttr(2);
						mvwaddch(playwin, object[y].yLoc - 1, object[y].xLoc , ' ');
						mvwaddch(playwin, object[y].yLoc, object[y].xLoc, 'O');
					}
					if (object[y].yLoc == 60)
					{
						mvwaddch(playwin, object[y].yLoc, object[y].xLoc , ' ');
						object[y].is_active = false;
					}
					if (object[y].yLoc == p->yLoc && object[y].xLoc == p->xLoc)
					{
						clear();
						mvwaddch(playwin, object[y].yLoc, object[y].xLoc, ' ');
						object[y].is_active = false;
                        endwin();
						return(27);
					}
				}
			}
		}
		if (spawncount % 1 == 0){
		int other2RandomX = (std::rand() % 90) + 2;
			for (x = 0; stars[x].is_active == true; x++){}
			if (x < NUM * 10)
			{
				stars[x].xLoc = other2RandomX;
				stars[x].yLoc = y;
				stars[x].setAttr(2);
				mvwaddch(playwin, stars[x].yLoc, stars[x].xLoc , '.');
			}
				
		}if (spawncount % 1 == 0)
		{
		for (int y = 0; y < NUM * 10; y++)
			{
				if (stars[y].is_active == true)
				{
					if (stars[y].yLoc < yMax)
					{
						stars[y].yLoc = stars[y].yLoc + 1;
						stars[y].setAttr(2);
						mvwaddch(playwin, stars[y].yLoc - 1, stars[y].xLoc , ' ');
						mvwaddch(playwin, stars[y].yLoc, stars[y].xLoc, '.');
					}
					if (stars[y].yLoc == 60)
					{
						mvwaddch(playwin, stars[y].yLoc, stars[y].xLoc , ' ');
						stars[y].is_active = false;
					}
				}
			}
		}
	}
	endwin();
}
