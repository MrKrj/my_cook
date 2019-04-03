/*
** EPITECH PROJECT, 2018
** My_Cook / Event
** File description:
** eventgMovedMenu.c
*/
#include <unistd.h>
#include <SFML/Graphics.h>
#include <SFML/Audio.h>
#include <SFML/Config.h>
#include <SFML/System.h>
#include <SFML/Graphics/Color.h>
#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include "../../include/struct.h"
#include "../../include/cook.h"

void move_in_moved_menugg(ck_t *ck)
{
	switch (ck->g->cursg[0]) {
		case -1:
			ck->g->cursg[0] = -2;
			ck->g->curs[0]->p.x = 178;
			sfSprite_setPosition(ck->g->curs[0]->s,
				ck->g->curs[0]->p);
			break;
		case -2:
			ck->g->cursg[0] = -3;
			ck->g->curs[0]->p.x = 345;
			sfSprite_setPosition(ck->g->curs[0]->s,
				ck->g->curs[0]->p);
			break;
		case -3:
			ck->g->cursg[0] = -4;
			ck->g->curs[0]->p.x = 506;
			sfSprite_setPosition(ck->g->curs[0]->s,
				ck->g->curs[0]->p);
			break;
	}
}

void move_in_moved_menugd(ck_t *ck)
{
	switch (ck->g->cursg[0]) {
		case -2:
			ck->g->cursg[0] = -1;
			ck->g->curs[0]->p.x = 15;
			sfSprite_setPosition(ck->g->curs[0]->s,
				ck->g->curs[0]->p);
			break;
		case -3:
			ck->g->cursg[0] = -2;
			ck->g->curs[0]->p.x = 178;
			sfSprite_setPosition(ck->g->curs[0]->s,
				ck->g->curs[0]->p);
			break;
		case -4:
			ck->g->cursg[0] = -3;
			ck->g->curs[0]->p.x = 345;
			sfSprite_setPosition(ck->g->curs[0]->s,
				ck->g->curs[0]->p);
			break;
	}
}

void move_in_moved_menudg(ck_t *ck)
{
	switch (ck->g->cursd[0]) {
		case -1:
			ck->g->cursd[0] = -2;
			ck->g->curs[1]->p.x = 1612;
			sfSprite_setPosition(ck->g->curs[1]->s,
				ck->g->curs[1]->p);
			break;
		case -2:
			ck->g->cursd[0] = -3;
			ck->g->curs[1]->p.x = 1445;
			sfSprite_setPosition(ck->g->curs[1]->s,
				ck->g->curs[1]->p);
			break;
		case -3:
			ck->g->cursd[0] = -4;
			ck->g->curs[1]->p.x = 1283;
			sfSprite_setPosition(ck->g->curs[1]->s,
				ck->g->curs[1]->p);
			break;
	}
}

void move_in_moved_menudd(ck_t *ck)
{
	switch (ck->g->cursd[0]) {
		case -2:
			ck->g->cursd[0] = -1;
			ck->g->curs[1]->p.x = 1773;
			sfSprite_setPosition(ck->g->curs[1]->s,
				ck->g->curs[1]->p);
			break;
		case -3:
			ck->g->cursd[0] = -2;
			ck->g->curs[1]->p.x = 1612;
			sfSprite_setPosition(ck->g->curs[1]->s,
				ck->g->curs[1]->p);
			break;
		case -4:
			ck->g->cursd[0] = -3;
			ck->g->curs[1]->p.x = 1445;
			sfSprite_setPosition(ck->g->curs[1]->s,
				ck->g->curs[1]->p);
			break;
	}
}
