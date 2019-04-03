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

void pop_d_unit_1_next(ck_t *ck, int id, int x)
{
	sfSprite_setPosition(ck->g->unitd[id]->s, ck->g->unitd[id]->p);
	ck->g->unitd[id]->life = ck->s->life_unit[ck->s->level[1]][1];
	ck->g->unitd[id]->attk = ck->s->attk_unit[ck->s->level[1]][1];
	ck->g->unitd[id]->life_max =
	ck->s->life_unit[ck->s->level[1]][1];
	ck->g->clickd = 0;
	ck->g->lifed[id]->p.x = ck->g->unitd[id]->p.x + 100;
	sfSprite_setPosition(ck->g->lifed[id]->s, ck->g->lifed[id]->p);
	ck->g->unitd[id]->price = ck->s->cost_unit[ck->s->level[1]][1];
	ck->g->unitd[id]->level = ck->s->level[1];
	ck->g->unitd[id]->unit = 1;
	ck->g->unitd[id]->chrono = 0;
	ck->g->unitd[id]->origin_x = x;
}

void pop_d_unit_2_next(ck_t *ck, int id, int x)
{
	sfSprite_setPosition(ck->g->unitd[id]->s, ck->g->unitd[id]->p);
	ck->g->unitd[id]->life = ck->s->life_unit[ck->s->level[1]][2];
	ck->g->unitd[id]->attk = ck->s->attk_unit[ck->s->level[1]][2];
	ck->g->unitd[id]->life_max =
	ck->s->life_unit[ck->s->level[1]][2];
	ck->g->clickd = 0;
	ck->g->lifed[id]->p.x = ck->g->unitd[id]->p.x + 100;
	sfSprite_setPosition(ck->g->lifed[id]->s, ck->g->lifed[id]->p);
	ck->g->unitd[id]->price = ck->s->cost_unit[ck->s->level[1]][2];
	ck->g->unitd[id]->level = ck->s->level[1];
	ck->g->unitd[id]->unit = 2;
	ck->g->unitd[id]->chrono = 0;
	ck->g->unitd[id]->origin_x = x;
}

void pop_d_unit_3_next(ck_t *ck, int id, int x)
{
	sfSprite_setPosition(ck->g->unitd[id]->s, ck->g->unitd[id]->p);
	ck->g->unitd[id]->life = ck->s->life_unit[ck->s->level[1]][3];
	ck->g->unitd[id]->attk = ck->s->attk_unit[ck->s->level[1]][3];
	ck->g->unitd[id]->life_max =
	ck->s->life_unit[ck->s->level[1]][3];
	ck->g->clickd = 0;
	ck->g->lifed[id]->p.x = ck->g->unitd[id]->p.x + 100;
	sfSprite_setPosition(ck->g->lifed[id]->s, ck->g->lifed[id]->p);
	ck->g->unitd[id]->price = ck->s->cost_unit[ck->s->level[1]][3];
	ck->g->unitd[id]->level = ck->s->level[1];
	ck->g->unitd[id]->unit = 3;
	ck->g->unitd[id]->chrono = 0;
	ck->g->unitd[id]->origin_x = x;
}

void pop_d_unit_4_next(ck_t *ck, int id, int x)
{
	sfSprite_setPosition(ck->g->unitd[id]->s, ck->g->unitd[id]->p);
	ck->g->unitd[id]->life = ck->s->life_unit[ck->s->level[1]][4];
	ck->g->unitd[id]->attk = ck->s->attk_unit[ck->s->level[1]][4];
	ck->g->unitd[id]->life_max =
	ck->s->life_unit[ck->s->level[1]][4];
	ck->g->clickd = 0;
	ck->g->lifed[id]->p.x = ck->g->unitd[id]->p.x + 100;
	sfSprite_setPosition(ck->g->lifed[id]->s, ck->g->lifed[id]->p);
	ck->g->unitd[id]->price = ck->s->cost_unit[ck->s->level[1]][4];
	ck->g->unitd[id]->level = ck->s->level[1];
	ck->g->unitd[id]->unit = 4;
	ck->g->unitd[id]->chrono = 0;
	ck->g->unitd[id]->origin_x = x;
}
