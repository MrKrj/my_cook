/*
** EPITECH PROJECT, 2018
** My_Cook / game
** File description:
** display_price.c
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

void display_price_gmenu(ck_t *ck)
{
	sfVector2f pos = {-100, 140};
	if (ck->g->cursg[0] == 1)
		pos.x = -100;
	if (ck->g->cursg[0] == 2) {
		sfText_setString(ck->s->overlayg,
			my_itoa(ck->s->cost_heal[ck->s->level[0]]));
		pos.x = 225;
	}
	if (ck->g->cursg[0] == 3) {
		if (ck->s->level[0] < 4) {
			sfText_setString(ck->s->overlayg,
				my_itoa(ck->s->cost_upgrade[ck->s->level[0]]));
			pos.x = 393;
		}
	}
	if (ck->g->cursg[0] == 4)
		pos.x = -100;
	sfText_setPosition(ck->s->overlayg, pos);
}

void display_price_gmoved(ck_t *ck)
{
	if (ck->g->cursg[0] == -1 || ck->g->cursg[0] == -2)
		display_price_gmoved_1_2(ck);
	if (ck->g->cursg[0] == -3 || ck->g->cursg[0] == -4)
		display_price_gmoved_3_4(ck);
}

void display_price_dmenu(ck_t *ck)
{
	sfVector2f pos = {-100, 138};
	if (ck->g->cursd[0] == 1)
		pos.x = -100;
	if (ck->g->cursd[0] == 2) {
		sfText_setString(ck->s->overlayd,
			my_itoa(ck->s->cost_heal[ck->s->level[1]]));
		pos.x = 1660;
	}
	if (ck->g->cursd[0] == 3) {
		if (ck->s->level[1] < 4) {
			sfText_setString(ck->s->overlayd,
				my_itoa(ck->s->cost_upgrade[ck->s->level[1]]));
			pos.x = 1490;
		}
	}
	if (ck->g->cursd[0] == 4)
		pos.x = -100;
	sfText_setPosition(ck->s->overlayd, pos);
}

void display_price_dmoved(ck_t *ck)
{
	if (ck->g->cursd[0] == -1 || ck->g->cursd[0] == -2)
		display_price_dmoved_1_2(ck);
	if (ck->g->cursd[0] == -3 || ck->g->cursd[0] == -4)
		display_price_dmoved_3_4(ck);
}
