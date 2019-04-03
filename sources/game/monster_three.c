/*
** EPITECH PROJECT, 2018
** My_Cook / game
** File description:
** monster_three.c
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

void change_sprite_move(ck_t *ck)
{
	for (int i = 0; i < 5; i++) {
		condition_move_unit(ck, i);
	}
}

int who_must_be_attack_g(ck_t *ck)
{
	int id = 5;
	int max = 50;
	for (int i = 0; i < 5; i++) {
		if (ck->g->unitg[i]->state == 1 && ck->g->unitg[i]->p.x > max) {
			id = i;
			max = ck->g->unitg[i]->p.x;
		}
	}
	return (id);
}

int who_must_be_attack_d(ck_t *ck)
{
	int id = 5;
	int max = 1470;
	for (int i = 0; i < 5; i++) {
		if (ck->g->unitd[i]->state == 1 && ck->g->unitd[i]->p.x < max) {
			id = i;
			max = ck->g->unitd[i]->p.x;
		}
	}
	return (id);
}

void move_unit_g(ck_t *ck)
{
	for (int i = 0; i < 5; i++) {
		if (ck->g->unitg[i]->state == 1) {
			ck->g->unitg[i]->p.x += 70 * ck->wdw->elapsed;
			sfSprite_setPosition(ck->g->unitg[i]->s,
				ck->g->unitg[i]->p);
			ck->g->lifeg[i]->p.x = ck->g->unitg[i]->p.x + 100;
			sfSprite_setPosition(ck->g->lifeg[i]->s,
				ck->g->lifeg[i]->p);
		}
	}
}

void move_unit_d(ck_t *ck)
{
	for (int i = 0; i < 5; i++) {
		if (ck->g->unitd[i]->state == 1) {
			ck->g->unitd[i]->p.x -= 70 * ck->wdw->elapsed;
			sfSprite_setPosition(ck->g->unitd[i]->s,
				ck->g->unitd[i]->p);
			ck->g->lifed[i]->p.x = ck->g->unitd[i]->p.x + 100;
			sfSprite_setPosition(ck->g->lifed[i]->s,
				ck->g->lifed[i]->p);
		}
	}
}
