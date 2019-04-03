/*
** EPITECH PROJECT, 2018
** My_Cook / game
** File description:
** display_life.c
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


void update_life_unit(ck_t *ck)
{
	float life;
	int nb;
	for (int i = 0; i < 5; i++) {
		if (ck->g->unitg[i]->state == 1) {
			life = (float)ck->g->unitg[i]->life /
			(float)ck->g->unitg[i]->life_max * 20;
			nb = 20 - (int)life;
			ck->g->lifeg[i]->r.top = nb * 43;
			sfSprite_setTextureRect(ck->g->lifeg[i]->s,
				ck->g->lifeg[i]->r);
		}
		if (ck->g->unitd[i]->state == 1) {
			life = (float)ck->g->unitd[i]->life /
			(float)ck->g->unitd[i]->life_max * 20;
			nb = 20 - (int)life;
			ck->g->lifed[i]->r.top = nb * 43;
			sfSprite_setTextureRect(ck->g->lifed[i]->s,
				ck->g->lifed[i]->r);
		}
	}
}

void update_life(ck_t *ck)
{
	float lifeg = (float)ck->s->cstl_life[0] /
	(float)ck->s->cstl_life_max[ck->s->level[0]] * 20;
	float lifed = (float)ck->s->cstl_life[1] /
	(float)ck->s->cstl_life_max[ck->s->level[1]] * 20;
	int nbg = 20 - (int)lifeg;
	int nbd = 20 - (int)lifed;
	ck->g->life[0]->r.top = nbg * 43;
	ck->g->life[1]->r.top = nbd * 43;
	sfSprite_setTextureRect(ck->g->life[0]->s, ck->g->life[0]->r);
	sfSprite_setTextureRect(ck->g->life[1]->s, ck->g->life[1]->r);
	update_life_unit(ck);
}

void update_life_digit(ck_t *ck)
{
	if (ck->s->cstl_life[0] < 0)
		ck->s->cstl_life[0] = 0;
	if (ck->s->cstl_life[1] < 0)
		ck->s->cstl_life[1] = 0;
	if (ck->s->cstl_life[0] == 0) {
		ck->g->who_win = 0;
		ck->scene = 5;
		sfWindow_setMouseCursorVisible((sfWindow *)ck->wdw->wdw, 1);
	}
	if (ck->s->cstl_life[1] == 0) {
		ck->g->who_win = 1;
		ck->scene = 5;
		sfWindow_setMouseCursorVisible((sfWindow *)ck->wdw->wdw, 1);
	}
	sfText_setString(ck->s->life_cstlg, my_itoa(ck->s->cstl_life[0]));
	sfText_setString(ck->s->life_cstld, my_itoa(ck->s->cstl_life[1]));
}
