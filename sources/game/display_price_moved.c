/*
** EPITECH PROJECT, 2018
** My_Cook / game
** File description:
** display_price_moved.c
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

void display_price_gmoved_1_2(ck_t *ck)
{
	sfVector2f pos = {-100, 375};
	if (ck->g->cursg[0] == -1) {
		sfText_setString(ck->s->overlayg,
			my_itoa(ck->s->cost_unit[ck->s->level[0]][1]));
		pos.x = 60;
	}
	if (ck->g->cursg[0] == -2) {
		sfText_setString(ck->s->overlayg,
			my_itoa(ck->s->cost_unit[ck->s->level[0]][2]));
		pos.x = 225;
	}
	sfText_setPosition(ck->s->overlayg, pos);
}

void display_price_gmoved_3_4(ck_t *ck)
{
	sfVector2f pos = {-100, 375};
	if (ck->g->cursg[0] == -3) {
		sfText_setString(ck->s->overlayg,
			my_itoa(ck->s->cost_unit[ck->s->level[0]][3]));
		pos.x = 393;
	}
	if (ck->g->cursg[0] == -4) {
		sfText_setString(ck->s->overlayg,
			my_itoa(ck->s->cost_unit[ck->s->level[0]][4]));
		pos.x = 555;
	}
	sfText_setPosition(ck->s->overlayg, pos);
}

void display_price_dmoved_1_2(ck_t *ck)
{
	sfVector2f pos = {-100, 373};
	if (ck->g->cursd[0] == -1) {
		sfText_setString(ck->s->overlayd,
			my_itoa(ck->s->cost_unit[ck->s->level[1]][1]));
		pos.x = 1822;
	}
	if (ck->g->cursd[0] == -2) {
		sfText_setString(ck->s->overlayd,
			my_itoa(ck->s->cost_unit[ck->s->level[1]][2]));
		pos.x = 1660;
	}
	sfText_setPosition(ck->s->overlayd, pos);
}

void display_price_dmoved_3_4(ck_t *ck)
{
	sfVector2f pos = {-100, 373};
	if (ck->g->cursd[0] == -3) {
		sfText_setString(ck->s->overlayd,
			my_itoa(ck->s->cost_unit[ck->s->level[1]][3]));
		pos.x = 1490;
	}
	if (ck->g->cursd[0] == -4) {
		sfText_setString(ck->s->overlayd,
			my_itoa(ck->s->cost_unit[ck->s->level[1]][4]));
		pos.x = 1330;
	}
	sfText_setPosition(ck->s->overlayd, pos);
}
