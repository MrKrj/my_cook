/*
** EPITECH PROJECT, 2018
** My_Cook / Event
** File description:
** eventOcheat.c
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

void react_to_mouse_cheat_up(ck_t *ck, int who)
{
	if (ck->s->level[who] < 4) {
		ck->s->level[who]++;
		ck->s->cstl_life[who] *= 5;
		if (who == 0)
			ck->g->cstl[who]->r.left -= 68;
		if (who == 1)
			ck->g->cstl[who]->r.left += 68;
		ck->g->menu[who]->r.top += 130;
		ck->s->ratio_gold[who] *= 5;
		sfSprite_setTextureRect(ck->g->cstl[who]->s,
			ck->g->cstl[who]->r);
		sfSprite_setTextureRect(ck->g->menu[who]->s,
			ck->g->menu[who]->r);
	}
}

void react_to_mouse_cheat_one(ck_t *ck)
{
	if ((ck->mouse_pos.x > 186 && ck->mouse_pos.x < 643) &&
	(ck->mouse_pos.y > 594 && ck->mouse_pos.y < 729)) {
		ck->o->button[1]->r.top = 136;
		sfSprite_setTextureRect(ck->o->button[1]->s,
		ck->o->button[1]->r);
	} else {
		ck->o->button[1]->r.top = 0;
		sfSprite_setTextureRect(ck->o->button[1]->s,
			ck->o->button[1]->r);
	}
	if ((ck->mouse_pos.x > 186 && ck->mouse_pos.x < 643) &&
	(ck->mouse_pos.y > 594 && ck->mouse_pos.y < 729) &&
	ck->mouse_pressed == 1) {
		if (ck->s->gold[0] < 1000000)
			ck->s->gold[0] += 10000;
	}
	react_to_mouse_cheat_two(ck);
}

void react_to_mouse_cheat_two(ck_t *ck)
{
	if ((ck->mouse_pos.x > 186 && ck->mouse_pos.x < 643) &&
	(ck->mouse_pos.y > 746 && ck->mouse_pos.y < 881)) {
		ck->o->button[2]->r.top = 136;
		sfSprite_setTextureRect(ck->o->button[2]->s,
		ck->o->button[2]->r);
	} else {
		ck->o->button[2]->r.top = 0;
		sfSprite_setTextureRect(ck->o->button[2]->s,
			ck->o->button[2]->r);
	}
	if ((ck->mouse_pos.x > 186 && ck->mouse_pos.x < 643) &&
	(ck->mouse_pos.y > 746 && ck->mouse_pos.y < 881) &&
	ck->mouse_pressed == 1) {
		if (ck->s->gold[1] < 1000000)
			ck->s->gold[1] += 10000;
	}
	react_to_mouse_cheat_three(ck);
}

void react_to_mouse_cheat_three(ck_t *ck)
{
	if ((ck->mouse_pos.x > 868 && ck->mouse_pos.x < 1325) &&
	(ck->mouse_pos.y > 746 && ck->mouse_pos.y < 881)) {
		ck->o->button[3]->r.top = 136;
		sfSprite_setTextureRect(ck->o->button[3]->s,
		ck->o->button[3]->r);
	} else {
		ck->o->button[3]->r.top = 0;
		sfSprite_setTextureRect(ck->o->button[3]->s,
			ck->o->button[3]->r);
	}
	if ((ck->mouse_pos.x > 868 && ck->mouse_pos.x < 1325) &&
	(ck->mouse_pos.y > 746 && ck->mouse_pos.y < 881) &&
	ck->mouse_pressed == 1) {
		react_to_mouse_cheat_up(ck, 1);
	}
	react_to_mouse_cheat_four(ck);
}

void react_to_mouse_cheat_four(ck_t *ck)
{
	if ((ck->mouse_pos.x > 868 && ck->mouse_pos.x < 1325) &&
	(ck->mouse_pos.y > 594 && ck->mouse_pos.y < 729)) {
		ck->o->button[4]->r.top = 136;
		sfSprite_setTextureRect(ck->o->button[4]->s,
		ck->o->button[4]->r);
	} else {
		ck->o->button[4]->r.top = 0;
		sfSprite_setTextureRect(ck->o->button[4]->s,
			ck->o->button[4]->r);
	}
	if ((ck->mouse_pos.x > 868 && ck->mouse_pos.x < 1325) &&
	(ck->mouse_pos.y > 594 && ck->mouse_pos.y < 729) &&
	ck->mouse_pressed == 1) {
		react_to_mouse_cheat_up(ck, 0);
	}
}
