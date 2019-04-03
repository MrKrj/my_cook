/*
** EPITECH PROJECT, 2018
** My_Cook / Event
** File description:
** eventgMenuPartII.c
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

int upgradeg(ck_t *ck)
{
	if (ck->s->level[0] < 4 &&
	ck->s->gold[0] >= ck->s->cost_upgrade[ck->s->level[0]]) {
		ck->s->level[0]++;
		ck->s->cstl_life[0] *= 5;
		ck->g->cstl[0]->r.left -= 68;
		ck->g->menu[0]->r.top += 130;
		ck->s->gold[0] -= ck->s->cost_upgrade[ck->s->level[0] - 1];
		ck->s->ratio_gold[0] *= 5;
		sfSprite_setTextureRect(ck->g->cstl[0]->s, ck->g->cstl[0]->r);
		sfSprite_setTextureRect(ck->g->menu[0]->s, ck->g->menu[0]->r);
	}
	return (0);
}

int upgraded(ck_t *ck)
{
	if (ck->s->level[1] < 4 &&
	ck->s->gold[1] >= ck->s->cost_upgrade[ck->s->level[1]]) {
		ck->s->level[1]++;
		ck->s->cstl_life[1] *= 5;
		ck->g->cstl[1]->r.left += 68;
		ck->g->menu[1]->r.top += 130;
		ck->s->gold[1] -= ck->s->cost_upgrade[ck->s->level[1] - 1];
		ck->s->ratio_gold[1] *= 5;
		sfSprite_setTextureRect(ck->g->cstl[1]->s, ck->g->cstl[1]->r);
		sfSprite_setTextureRect(ck->g->menu[1]->s, ck->g->menu[1]->r);
	}
	return (0);
}

int freezeg(ck_t *ck)
{
	ck->scene = 1;
	sfWindow_setMouseCursorVisible((sfWindow *)ck->wdw->wdw, 1);
	return (0);
}

int freezed(ck_t *ck)
{
	ck->scene = 1;
	sfWindow_setMouseCursorVisible((sfWindow *)ck->wdw->wdw, 1);
	return (0);
}
