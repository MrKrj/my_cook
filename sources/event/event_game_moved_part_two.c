/*
** EPITECH PROJECT, 2018
** My_Cook / Event
** File description:
** eventgMovedPartII.c
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

int react_to_enter_d_moved_menu(ck_t *ck)
{
	int id = which_id_d(ck);
	if (id == -1)
		return (0);
	switch (ck->g->cursd[0]) {
		case -1:
			pop_d_unit_1(ck, id);
			break;
		case -2:
			pop_d_unit_2(ck, id);
			break;
		case -3:
			pop_d_unit_3(ck, id);
			break;
		case -4:
			pop_d_unit_4(ck, id);
			break;
	}
	return (0);
}

void pop_d_unit_1(ck_t *ck, int id)
{
	int x = 179 * (12 * (ck->s->level[1] - 1));
	if (ck->s->gold[1] >= ck->s->cost_unit[ck->s->level[1]][1] &&
	ck->g->clickd > 4) {
		ck->s->gold[1] -= ck->s->cost_unit[ck->s->level[1]][1];
		ck->g->unitd[id]->state = 1;
		ck->g->unitd[id]->r.top = x;
		ck->g->unitd[id]->r.left = 2824;
		sfSprite_setTextureRect(ck->g->unitd[id]->s,
			ck->g->unitd[id]->r);
		ck->g->unitd[id]->p.x = 1460;
		pop_d_unit_1_next(ck, id, x);
	}
}

void pop_d_unit_2(ck_t *ck, int id)
{
	int x = 537 + (179 * (12 * (ck->s->level[1] - 1)));
	if (ck->s->gold[1] >= ck->s->cost_unit[ck->s->level[1]][2] &&
	ck->g->clickd > 4) {
		ck->s->gold[1] -= ck->s->cost_unit[ck->s->level[1]][2];
		ck->g->unitd[id]->state = 1;
		ck->g->unitd[id]->r.top = x;
		ck->g->unitd[id]->r.left = 2824;
		sfSprite_setTextureRect(ck->g->unitd[id]->s,
			ck->g->unitd[id]->r);
		ck->g->unitd[id]->p.x = 1460;
		pop_d_unit_2_next(ck, id, x);
	}
}

void pop_d_unit_3(ck_t *ck, int id)
{
	int x = 1074 + (179 * (12 * (ck->s->level[1] - 1)));
	if (ck->s->gold[1] >= ck->s->cost_unit[ck->s->level[1]][3] &&
	ck->g->clickd > 4) {
		ck->s->gold[1] -= ck->s->cost_unit[ck->s->level[1]][3];
		ck->g->unitd[id]->state = 1;
		ck->g->unitd[id]->r.top = x;
		ck->g->unitd[id]->r.left = 2824;
		sfSprite_setTextureRect(ck->g->unitd[id]->s,
			ck->g->unitd[id]->r);
		ck->g->unitd[id]->p.x = 1460;
		pop_d_unit_3_next(ck, id, x);
	}
}

void pop_d_unit_4(ck_t *ck, int id)
{
	int x = 1611 + (179 * (12 * (ck->s->level[1] - 1)));
	if (ck->s->gold[1] >= ck->s->cost_unit[ck->s->level[1]][4] &&
	ck->g->clickd > 4) {
		ck->s->gold[1] -= ck->s->cost_unit[ck->s->level[1]][4];
		ck->g->unitd[id]->state = 1;
		ck->g->unitd[id]->r.top = x;
		ck->g->unitd[id]->r.left = 2824;
		sfSprite_setTextureRect(ck->g->unitd[id]->s,
			ck->g->unitd[id]->r);
		ck->g->unitd[id]->p.x = 1460;
		pop_d_unit_4_next(ck, id, x);
	}
}
