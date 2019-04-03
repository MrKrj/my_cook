/*
** EPITECH PROJECT, 2018
** My_Cook / Event
** File description:
** eventgMenuPartI.c
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


int display_menug(ck_t *ck)
{
	int add = 0;
	if (ck->g->movedMenu[0] == 0) {
		ck->g->menu[0]->p.y = 253;
		add = 1;
	}
	if (ck->g->movedMenu[0] == 1) {
		ck->g->menu[0]->p.y = 0;
		add = -1;
	}
	ck->g->movedMenu[0] += add;
	sfSprite_setPosition(ck->g->menu[0]->s, ck->g->menu[0]->p);
	return (0);
}

int display_menud(ck_t *ck)
{
	int add = 0;
	if (ck->g->movedMenu[1] == 0) {
		ck->g->menu[1]->p.y = 253;
		add = 1;
	}
	if (ck->g->movedMenu[1] == 1) {
		ck->g->menu[1]->p.y = 0;
		add = -1;
	}
	ck->g->movedMenu[1] += add;
	sfSprite_setPosition(ck->g->menu[1]->s, ck->g->menu[1]->p);
	return (0);
}

int healg(ck_t *ck)
{
	if (ck->s->gold[0] >= ck->s->cost_heal[ck->s->level[0]] &&
	ck->s->cstl_life[0] < ck->s->cstl_life_max[ck->s->level[0]]) {
		ck->s->cstl_life[0] +=
		(ck->s->cstl_life_max[ck->s->level[0]]) / 5;
		if (ck->s->cstl_life[0] > ck->s->cstl_life_max[ck->s->level[0]])
			ck->s->cstl_life[0] =
			ck->s->cstl_life_max[ck->s->level[0]];
		ck->s->gold[0] -= ck->s->cost_heal[ck->s->level[0]];
	}
	return (0);
}

int heald(ck_t *ck)
{
	if (ck->s->gold[1] >= ck->s->cost_heal[ck->s->level[1]] &&
	ck->s->cstl_life[1] < ck->s->cstl_life_max[ck->s->level[1]]) {
		ck->s->cstl_life[1] +=
		(ck->s->cstl_life_max[ck->s->level[1]]) / 5;
		if (ck->s->cstl_life[1] > ck->s->cstl_life_max[ck->s->level[1]])
			ck->s->cstl_life[1] =
			ck->s->cstl_life_max[ck->s->level[1]];
		ck->s->gold[1] -= ck->s->cost_heal[ck->s->level[1]];
	}
	return (0);
}
