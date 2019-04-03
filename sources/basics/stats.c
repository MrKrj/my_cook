/*
** EPITECH PROJECT, 2018
** My_Cook / Basics
** File description:
** stats.c
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
#include "../../include/define.h"

void set_struct(ck_t *ck)
{
	ck->m = malloc(sizeof(m_t));
	ck->o = malloc(sizeof(o_t));
	ck->p = malloc(sizeof(p_t));
	ck->g = malloc(sizeof(g_t));
	ck->s = malloc(sizeof(s_t));
	ck->t = malloc(sizeof(t_t));
}

void set_stats(ck_t *ck)
{
	set_struct(ck);
	ck->s->ratio_gold[0] = 5;
	ck->s->ratio_gold[1] = 5;
	ck->s->gold[0] = 50;
	ck->s->gold[1] = 50;
	ck->s->level[0] = 1;
	ck->s->level[1] = 1;
	ck->s->cstl_life[0] = 1000;
	ck->s->cstl_life[1] = 1000;
	ck->s->cstl_life_max[0] = CASTLE_LIFE_MAX_0;
	ck->s->cstl_life_max[1] = CASTLE_LIFE_MAX_1;
	ck->s->cstl_life_max[2] = CASTLE_LIFE_MAX_2;
	ck->s->cstl_life_max[3] = CASTLE_LIFE_MAX_3;
	ck->s->cstl_life_max[4] = CASTLE_LIFE_MAX_4;
	ck->s->cost_upgrade[0] = CASTLE_COST_UPGRADE_0;
	ck->s->cost_upgrade[1] = CASTLE_COST_UPGRADE_1;
	ck->s->cost_upgrade[2] = CASTLE_COST_UPGRADE_2;
	ck->s->cost_upgrade[3] = CASTLE_COST_UPGRADE_3;
	ck->s->cost_upgrade[4] = CASTLE_COST_UPGRADE_4;
	set_stats_part_1(ck);

}

void set_stats_part_1(ck_t *ck)
{
	ck->s->time_gold = 0;
	ck->s->cost_heal[0] = 0;
	ck->s->cost_heal[1] = 100;
	ck->s->cost_heal[2] = 500;
	ck->s->cost_heal[3] = 2000;
	ck->s->cost_heal[4] = 5000;
	ck->s->cost_unit[0][0] = UNIT_COST_0_0;
	ck->s->cost_unit[0][1] = UNIT_COST_0_1;
	ck->s->cost_unit[0][2] = UNIT_COST_0_2;
	ck->s->cost_unit[0][3] = UNIT_COST_0_3;
	ck->s->cost_unit[0][4] = UNIT_COST_0_4;
	set_stats_part_2(ck);
	set_stats_part_3(ck);
}

void set_stats_part_2(ck_t *ck)
{
	ck->s->cost_unit[1][0] = UNIT_COST_1_0;
	ck->s->cost_unit[1][1] = UNIT_COST_1_1;
	ck->s->cost_unit[1][2] = UNIT_COST_1_2;
	ck->s->cost_unit[1][3] = UNIT_COST_1_3;
	ck->s->cost_unit[1][4] = UNIT_COST_1_4;
	ck->s->cost_unit[2][0] = UNIT_COST_2_0;
	ck->s->cost_unit[2][1] = UNIT_COST_2_1;
	ck->s->cost_unit[2][2] = UNIT_COST_2_2;
	ck->s->cost_unit[2][3] = UNIT_COST_2_3;
	ck->s->cost_unit[2][4] = UNIT_COST_2_4;
	ck->s->cost_unit[3][0] = UNIT_COST_3_0;
	ck->s->cost_unit[3][1] = UNIT_COST_3_1;
	ck->s->cost_unit[3][2] = UNIT_COST_3_2;
	ck->s->cost_unit[3][3] = UNIT_COST_3_3;
	ck->s->cost_unit[3][4] = UNIT_COST_3_4;
	ck->s->cost_unit[4][0] = UNIT_COST_4_0;
	ck->s->cost_unit[4][1] = UNIT_COST_4_1;
	ck->s->cost_unit[4][2] = UNIT_COST_4_2;
	ck->s->cost_unit[4][3] = UNIT_COST_4_3;
	ck->s->cost_unit[4][4] = UNIT_COST_4_4;
}

void set_stats_part_3(ck_t *ck)
{
	ck->t->chrono = 0;
	ck->g->chrono = 0;
	if (ck->cheat == 1) {
		ck->s->gold[0] = 1000000;
		ck->s->gold[1] = 1000000;
	}
	ck->s->life_unit[0][0] = 0;
	ck->s->life_unit[0][1] = 0;
	ck->s->life_unit[0][2] = 0;
	ck->s->life_unit[0][3] = 0;
	ck->s->life_unit[0][4] = 0;
	ck->s->life_unit[1][0] = 0;
	ck->s->life_unit[1][1] = LIFE_1_1;
	ck->s->life_unit[1][2] = LIFE_1_2;
	ck->s->life_unit[1][3] = LIFE_1_3;
	ck->s->life_unit[1][4] = LIFE_1_4;
	ck->s->life_unit[2][0] = 0;
	ck->s->life_unit[2][1] = LIFE_2_1;
	ck->s->life_unit[2][2] = LIFE_2_2;
	set_stats_part_4(ck);
}
