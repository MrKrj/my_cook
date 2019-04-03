/*
** EPITECH PROJECT, 2018
** My_Cook / game
** File description:
** monster_four.c
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

void stop_move_monster_g(ck_t *ck)
{
	for (int i = 0; i < 5; i++)
		ck->g->unitg[i]->chrono = 0;
}

void stop_move_monster_d(ck_t *ck)
{
	for (int i = 0; i < 5; i++)
		ck->g->unitd[i]->chrono = 0;
}

void condition_move_unit(ck_t *ck, int i)
{
	if (ck->g->unitg[i]->chrono > 0.1) {
		ck->g->unitg[i]->r.left += 200;
		if (ck->g->unitg[i]->r.left > 200 *
		(ck->s->nb_spt[ck->g->unitg[i]->level]
		[ck->g->unitg[i]->unit] - 1))
			ck->g->unitg[i]->r.left = 0;
		sfSprite_setTextureRect(ck->g->unitg[i]->s, ck->g->unitg[i]->r);
		ck->g->unitg[i]->chrono -= 0.1;
	}
	if (ck->g->unitd[i]->chrono > 0.1) {
		ck->g->unitd[i]->r.left -= 200;
		if (ck->g->unitd[i]->r.left < 3024 - (200 *
		(ck->s->nb_spt[ck->g->unitd[i]->level]
		[ck->g->unitd[i]->unit] - 1)))
			ck->g->unitd[i]->r.left = 2824;
		sfSprite_setTextureRect(ck->g->unitd[i]->s, ck->g->unitd[i]->r);
		ck->g->unitd[i]->chrono -= 0.1;
	}
}
