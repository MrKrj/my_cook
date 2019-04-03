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

void pop_g_unit_1_next(ck_t *ck, int id, int x)
{
	sfSprite_setPosition(ck->g->unitg[id]->s, ck->g->unitg[id]->p);
	ck->g->unitg[id]->life = ck->s->life_unit[ck->s->level[0]][1];
	ck->g->unitg[id]->life_max =
	ck->s->life_unit[ck->s->level[0]][1];
	ck->g->unitg[id]->attk = ck->s->attk_unit[ck->s->level[0]][1];
	ck->g->clickg = 0;
	ck->g->lifeg[id]->p.x = ck->g->unitg[id]->p.x + 100;
	sfSprite_setPosition(ck->g->lifeg[id]->s, ck->g->lifeg[id]->p);
	ck->g->unitg[id]->price = ck->s->cost_unit[ck->s->level[0]][1];
	ck->g->unitg[id]->level = ck->s->level[0];
	ck->g->unitg[id]->unit = 1;
	ck->g->unitg[id]->chrono = 0;
	ck->g->unitg[id]->origin_x = x;
}

void pop_g_unit_2_next(ck_t *ck, int id, int x)
{
	sfSprite_setPosition(ck->g->unitg[id]->s, ck->g->unitg[id]->p);
	ck->g->unitg[id]->life = ck->s->life_unit[ck->s->level[0]][2];
	ck->g->unitg[id]->life_max =
	ck->s->life_unit[ck->s->level[0]][2];
	ck->g->unitg[id]->attk = ck->s->attk_unit[ck->s->level[0]][2];
	ck->g->clickg = 0;
	ck->g->lifeg[id]->p.x = ck->g->unitg[id]->p.x + 100;
	sfSprite_setPosition(ck->g->lifeg[id]->s, ck->g->lifeg[id]->p);
	ck->g->unitg[id]->price = ck->s->cost_unit[ck->s->level[0]][2];
	ck->g->unitg[id]->level = ck->s->level[0];
	ck->g->unitg[id]->unit = 2;
	ck->g->unitg[id]->chrono = 0;
	ck->g->unitg[id]->origin_x = x;
}

void pop_g_unit_3_next(ck_t *ck, int id, int x)
{
	sfSprite_setPosition(ck->g->unitg[id]->s, ck->g->unitg[id]->p);
	ck->g->unitg[id]->life = ck->s->life_unit[ck->s->level[0]][3];
	ck->g->unitg[id]->life_max =
	ck->s->life_unit[ck->s->level[0]][3];
	ck->g->unitg[id]->attk = ck->s->attk_unit[ck->s->level[0]][3];
	ck->g->clickg = 0;
	ck->g->lifeg[id]->p.x = ck->g->unitg[id]->p.x + 100;
	sfSprite_setPosition(ck->g->lifeg[id]->s, ck->g->lifeg[id]->p);
	ck->g->unitg[id]->price = ck->s->cost_unit[ck->s->level[0]][3];
	ck->g->unitg[id]->level = ck->s->level[0];
	ck->g->unitg[id]->unit = 3;
	ck->g->unitg[id]->chrono = 0;
	ck->g->unitg[id]->origin_x = x;
}

void pop_g_unit_4_next(ck_t *ck, int id, int x)
{
	sfSprite_setPosition(ck->g->unitg[id]->s, ck->g->unitg[id]->p);
	ck->g->unitg[id]->life = ck->s->life_unit[ck->s->level[0]][4];
	ck->g->unitg[id]->life_max =
	ck->s->life_unit[ck->s->level[0]][4];
	ck->g->unitg[id]->attk = ck->s->attk_unit[ck->s->level[0]][4];
	ck->g->clickg = 0;
	ck->g->lifeg[id]->p.x = ck->g->unitg[id]->p.x + 100;
	sfSprite_setPosition(ck->g->lifeg[id]->s, ck->g->lifeg[id]->p);
	ck->g->unitg[id]->price = ck->s->cost_unit[ck->s->level[0]][4];
	ck->g->unitg[id]->level = ck->s->level[0];
	ck->g->unitg[id]->unit = 4;
	ck->g->unitg[id]->chrono = 0;
	ck->g->unitg[id]->origin_x = x;
}
