/*
** EPITECH PROJECT, 2018
** My_Cook / Event
** File description:
** eventgMovedPartI.c
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

int react_to_enter_g_moved_menu(ck_t *ck)
{
	int id = which_id_g(ck);
	if (id == -1)
		return (0);
	switch (ck->g->cursg[0]) {
		case -1:
			pop_g_unit_1(ck, id);
			break;
		case -2:
			pop_g_unit_2(ck, id);
			break;
		case -3:
			pop_g_unit_3(ck, id);
			break;
		case -4:
			pop_g_unit_4(ck, id);
			break;
	}
	return (0);
}

void pop_g_unit_1(ck_t *ck, int id)
{
	int x = 179 * (12 * (ck->s->level[0] - 1));
	if (ck->s->gold[0] >= ck->s->cost_unit[ck->s->level[0]][1] &&
	ck->g->clickg > 4) {
		ck->s->gold[0] -= ck->s->cost_unit[ck->s->level[0]][1];
		ck->g->unitg[id]->state = 1;
		ck->g->unitg[id]->r.top = x;
		ck->g->unitg[id]->r.left = 0;
		sfSprite_setTextureRect(ck->g->unitg[id]->s,
			ck->g->unitg[id]->r);
		ck->g->unitg[id]->p.x = 60;
		pop_g_unit_1_next(ck, id, x);
	}
}

void pop_g_unit_2(ck_t *ck, int id)
{
	int x = 537 + (179 * (12 * (ck->s->level[0] - 1)));
	if (ck->s->gold[0] >= ck->s->cost_unit[ck->s->level[0]][2] &&
	ck->g->clickg > 4) {
		ck->s->gold[0] -= ck->s->cost_unit[ck->s->level[0]][2];
		ck->g->unitg[id]->state = 1;
		ck->g->unitg[id]->r.top = x;
		ck->g->unitg[id]->r.left = 0;
		sfSprite_setTextureRect(ck->g->unitg[id]->s,
			ck->g->unitg[id]->r);
		ck->g->unitg[id]->p.x = 60;
		pop_g_unit_2_next(ck, id, x);
	}
}

void pop_g_unit_3(ck_t *ck, int id)
{
	int x = 1074 + (179 * (12 * (ck->s->level[0] - 1)));
	if (ck->s->gold[0] >= ck->s->cost_unit[ck->s->level[0]][3] &&
	ck->g->clickg > 4) {
		ck->s->gold[0] -= ck->s->cost_unit[ck->s->level[0]][3];
		ck->g->unitg[id]->state = 1;
		ck->g->unitg[id]->r.top = x;
		ck->g->unitg[id]->r.left = 0;
		sfSprite_setTextureRect(ck->g->unitg[id]->s,
			ck->g->unitg[id]->r);
		ck->g->unitg[id]->p.x = 60;
		pop_g_unit_3_next(ck, id, x);
	}
}

void pop_g_unit_4(ck_t *ck, int id)
{
	int x = 1611 + (179 * (12 * (ck->s->level[0] - 1)));
	if (ck->s->gold[0] >= ck->s->cost_unit[ck->s->level[0]][4] &&
	ck->g->clickg > 4) {
		ck->s->gold[0] -= ck->s->cost_unit[ck->s->level[0]][4];
		ck->g->unitg[id]->state = 1;
		ck->g->unitg[id]->r.top = x;
		ck->g->unitg[id]->r.left = 0;
		sfSprite_setTextureRect(ck->g->unitg[id]->s,
			ck->g->unitg[id]->r);
		ck->g->unitg[id]->p.x = 60;
		pop_g_unit_4_next(ck, id, x);
	}
}
