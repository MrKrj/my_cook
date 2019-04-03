/*
** EPITECH PROJECT, 2018
** My_Cook / game
** File description:
** monster_two.c
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

void add_time_to_monster(ck_t *ck)
{
	for (int i = 0; i < 5; i++) {
		if (ck->g->unitg[i]->state == 1)
			ck->g->unitg[i]->chrono += ck->wdw->elapsed;
		if (ck->g->unitd[i]->state == 1)
			ck->g->unitd[i]->chrono += ck->wdw->elapsed;
	}
}

void update_monster_g(ck_t *ck, int max_forward_g, int id_forward_g)
{
	int who = who_must_be_attack_d(ck);
	if (ck->g->unitg[id_forward_g]->p.x < max_forward_g - 200) {
		move_unit_g(ck);
	} else {
		if (who == 5) {
			ck->s->cstl_life[1] -=
			ck->g->unitg[id_forward_g]->attk * ck->wdw->elapsed;
			ck->g->unitg[id_forward_g]->life -=
		(ck->g->unitg[id_forward_g]->attk / 2) * ck->wdw->elapsed;
			if (ck->g->unitg[id_forward_g]->life <= 0)
				ck->g->unitg[id_forward_g]->state = 0;
		} else if (ck->g->unitd[who]->life > 0) {
			ck->g->unitd[who]->life -=
			ck->g->unitg[id_forward_g]->attk * ck->wdw->elapsed;
		} else {
			ck->g->unitd[who]->state = 0;
			ck->s->gold[0] += ck->g->unitd[who]->price * 1.5;
		}
		stop_move_monster_g(ck);
	}
}

void update_monster_d(ck_t *ck, int max_forward_d, int id_forward_d)
{
	int who = who_must_be_attack_g(ck);
	if (ck->g->unitd[id_forward_d]->p.x > max_forward_d + 200) {
		move_unit_d(ck);
	} else {
		if (who == 5) {
			ck->s->cstl_life[0] -=
			ck->g->unitd[id_forward_d]->attk * ck->wdw->elapsed;
			ck->g->unitd[id_forward_d]->life -=
		(ck->g->unitd[id_forward_d]->attk / 10) * ck->wdw->elapsed;
			if (ck->g->unitd[id_forward_d]->life <= 0)
				ck->g->unitd[id_forward_d]->state = 0;
		} else if (ck->g->unitg[who]->life > 0) {
			ck->g->unitg[who]->life -=
			ck->g->unitd[id_forward_d]->attk * ck->wdw->elapsed;
		} else {
			ck->g->unitg[who]->state = 0;
			ck->s->gold[1] += ck->g->unitg[who]->price * 1.5;
		}
		stop_move_monster_d(ck);
	}
}

int how_many_unit_g(ck_t *ck)
{
	int nb = 0;
	for (int i = 0; i < 5; i++) {
		if (ck->g->unitg[i]->state == 1)
			nb++;
	}
	return (nb);
}

int how_many_unit_d(ck_t *ck)
{
	int nb = 0;
	for (int i = 0; i < 5; i++) {
		if (ck->g->unitd[i]->state == 1)
			nb++;
	}
	return (nb);
}
