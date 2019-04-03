/*
** EPITECH PROJECT, 2018
** My_Cook / Basics
** File description:
** stats_units.c
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

void set_stats_part_4(ck_t *ck)
{
	ck->s->life_unit[2][3] = LIFE_2_3;
	ck->s->life_unit[2][4] = LIFE_2_4;
	ck->s->life_unit[3][0] = 0;
	ck->s->life_unit[3][1] = LIFE_3_1;
	ck->s->life_unit[3][2] = LIFE_3_2;
	ck->s->life_unit[3][3] = LIFE_3_3;
	ck->s->life_unit[3][4] = LIFE_3_4;
	ck->s->life_unit[4][0] = 0;
	ck->s->life_unit[4][1] = LIFE_4_1;
	ck->s->life_unit[4][2] = LIFE_4_2;
	ck->s->life_unit[4][3] = LIFE_4_3;
	ck->s->life_unit[4][4] = LIFE_4_3;
	ck->s->attk_unit[0][0] = 0;
	ck->s->attk_unit[0][1] = 0;
	ck->s->attk_unit[0][2] = 0;
	ck->s->attk_unit[0][3] = 0;
	ck->s->attk_unit[0][4] = 0;
	ck->s->attk_unit[1][0] = 0;
	ck->s->attk_unit[1][1] = ATTK_1_1;
	set_stats_part_5(ck);
}

void set_stats_part_5(ck_t *ck)
{
	ck->s->attk_unit[1][1] = ATTK_1_1;
	ck->s->attk_unit[1][2] = ATTK_1_2;
	ck->s->attk_unit[1][3] = ATTK_1_3;
	ck->s->attk_unit[1][4] = ATTK_1_4;
	ck->s->attk_unit[2][0] = 0;
	ck->s->attk_unit[2][1] = ATTK_2_1;
	ck->s->attk_unit[2][2] = ATTK_2_2;
	ck->s->attk_unit[2][3] = ATTK_2_3;
	ck->s->attk_unit[2][4] = ATTK_2_4;
	ck->s->attk_unit[3][0] = 0;
	ck->s->attk_unit[3][1] = ATTK_3_1;
	ck->s->attk_unit[3][2] = ATTK_3_2;
	ck->s->attk_unit[3][3] = ATTK_3_3;
	ck->s->attk_unit[3][4] = ATTK_3_4;
	ck->s->attk_unit[4][0] = 0;
	ck->s->attk_unit[4][1] = ATTK_4_1;
	ck->s->attk_unit[4][2] = ATTK_4_2;
	ck->s->attk_unit[4][3] = ATTK_4_3;
	ck->s->attk_unit[4][4] = ATTK_4_4;
	set_stats_part_6(ck);
}

void set_stats_part_6(ck_t *ck)
{
	ck->g->clickg = 5;
	ck->g->clickd = 5;
	ck->s->nb_spt[1][1] = NB_1_1;
	ck->s->nb_spt[1][2] = NB_1_2;
	ck->s->nb_spt[1][3] = NB_1_3;
	ck->s->nb_spt[1][4] = NB_1_4;
	ck->s->nb_spt[2][1] = NB_2_1;
	ck->s->nb_spt[2][2] = NB_2_2;
	ck->s->nb_spt[2][3] = NB_2_3;
	ck->s->nb_spt[2][4] = NB_2_4;
	ck->s->nb_spt[3][1] = NB_3_1;
	ck->s->nb_spt[3][2] = NB_3_2;
	ck->s->nb_spt[3][3] = NB_3_3;
	ck->s->nb_spt[3][4] = NB_3_4;
	ck->s->nb_spt[4][1] = NB_4_1;
	ck->s->nb_spt[4][2] = NB_4_2;
	ck->s->nb_spt[4][3] = NB_4_3;
	ck->s->nb_spt[4][4] = NB_4_4;
}
