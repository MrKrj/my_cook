/*
** EPITECH PROJECT, 2018
** My_Cook / game
** File description:
** monster.c
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

int where_is_limit_g(ck_t *ck)
{
	int max = 1580;
	for (int i = 0; i < 5; i++) {
		if (ck->g->unitd[i]->state == 1 && ck->g->unitd[i]->p.x < max)
			max = ck->g->unitd[i]->p.x;
	}
	return (max);
}

int where_is_limit_d(ck_t *ck)
{
	int max = -50;
	for (int i = 0; i < 5; i++) {
		if (ck->g->unitg[i]->state == 1 && ck->g->unitg[i]->p.x > max)
			max = ck->g->unitg[i]->p.x;
	}
	return (max);
}

int who_is_forward_g(ck_t *ck)
{
	int id = 0;
	int max = 60;
	for (int i = 0; i < 5; i++) {
		if (ck->g->unitg[i]->state == 1 && ck->g->unitg[i]->p.x > max) {
			id = i;
			max = ck->g->unitg[i]->p.x;
		}
	}
	return (id);
}

int who_is_forward_d(ck_t *ck)
{
	int id = 0;
	int max = 1460;
	for (int i = 0; i < 5; i++) {
		if (ck->g->unitd[i]->state == 1 && ck->g->unitd[i]->p.x < max) {
			id = i;
			max = ck->g->unitd[i]->p.x;
		}
	}
	return (id);
}

void update_monster(ck_t *ck)
{
	int max_forward_g = where_is_limit_g(ck);
	int max_forward_d = where_is_limit_d(ck);
	int id_forward_g = who_is_forward_g(ck);
	int id_forward_d = who_is_forward_d(ck);
	if (how_many_unit_g(ck) > 0)
		update_monster_g(ck, max_forward_g, id_forward_g);
	if (how_many_unit_d(ck) > 0)
		update_monster_d(ck, max_forward_d, id_forward_d);

}
