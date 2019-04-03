/*
** EPITECH PROJECT, 2018
** My_Cook / Basics
** File description:
** game_loop.c
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

void destroy(ck_t *ck)
{
	sfClock_destroy(ck->wdw->clock);
	sfMusic_destroy(ck->wdw->music);
	sfText_destroy(ck->m->jouer);
	sfText_destroy(ck->m->options);
	sfText_destroy(ck->m->quitter);
	for (int i = 0; i < 6; i++)
		sfText_destroy(ck->o->text[i]);
	sfText_destroy(ck->p->jouer);
	sfText_destroy(ck->p->options);
	sfText_destroy(ck->p->quitter);
	sfText_destroy(ck->g->end_button);
	sfText_destroy(ck->s->goldg);
	sfText_destroy(ck->s->goldd);
	sfText_destroy(ck->s->overlayg);
	sfText_destroy(ck->s->overlayd);
	sfText_destroy(ck->s->life_cstlg);
	sfText_destroy(ck->s->life_cstld);
	sfText_destroy(ck->t->chronotxt);
	destroy_part_1(ck);
}

void destroy_part_1(ck_t *ck)
{
	for (int i = 0; i < 3; i++) {
		sfSprite_destroy(ck->m->bck[i]->s);
		sfTexture_destroy(ck->m->bck[i]->t);
		free(ck->m->bck[i]);
	}
	for (int i = 0; i < 6; i++) {
		sfSprite_destroy(ck->m->pllx[i]->s);
		sfTexture_destroy(ck->m->pllx[i]->t);
		free(ck->m->pllx[i]);
	}
	for (int i = 0; i < 2; i++) {
		sfSprite_destroy(ck->o->bck[i]->s);
		sfTexture_destroy(ck->o->bck[i]->t);
		free(ck->o->bck[i]);
		sfSprite_destroy(ck->o->sound[i]->s);
		sfTexture_destroy(ck->o->sound[i]->t);
		free(ck->o->sound[i]);
	}
	destroy_part_2(ck);
}

void destroy_part_2(ck_t *ck)
{
	for (int i = 0; i < 2; i++) {
		sfSprite_destroy(ck->g->bck[i]->s);
		sfTexture_destroy(ck->g->bck[i]->t);
		free(ck->g->bck[i]);
		sfSprite_destroy(ck->g->cstl[i]->s);
		sfTexture_destroy(ck->g->cstl[i]->t);
		free(ck->g->cstl[i]);
		sfSprite_destroy(ck->g->curs[i]->s);
		sfTexture_destroy(ck->g->curs[i]->t);
		free(ck->g->curs[i]);
		sfSprite_destroy(ck->g->menu[i]->s);
		sfTexture_destroy(ck->g->menu[i]->t);
		free(ck->g->menu[i]);
		sfSprite_destroy(ck->g->life[i]->s);
		sfTexture_destroy(ck->g->life[i]->t);
		free(ck->g->life[i]);
	}
	destroy_part_3(ck);
}

void destroy_part_3(ck_t *ck)
{
	for (int i = 0; i < 5; i++) {
		sfSprite_destroy(ck->o->button[i]->s);
		sfTexture_destroy(ck->o->button[i]->t);
		free(ck->o->button[i]);
	}
	for (int i = 0; i < 2; i++) {
		sfSprite_destroy(ck->p->bck[i]->s);
		sfTexture_destroy(ck->p->bck[i]->t);
		free(ck->p->bck[i]);
	}
	for (int i = 0; i < 2; i++) {
		sfSprite_destroy(ck->g->end[i]->s);
		sfTexture_destroy(ck->g->end[i]->t);
		free(ck->g->end[i]);
	}
	destroy_part_4(ck);
}

void destroy_part_4(ck_t *ck)
{
	for (int i = 0; i < 1; i++) {
		sfSprite_destroy(ck->g->button[i]->s);
		sfTexture_destroy(ck->g->button[i]->t);
		free(ck->g->button[i]);
	}
	for (int i = 0; i < 5; i++) {
		sfSprite_destroy(ck->g->unitg[i]->s);
		sfTexture_destroy(ck->g->unitg[i]->t);
		free(ck->g->unitg[i]);
		sfSprite_destroy(ck->g->unitd[i]->s);
		sfTexture_destroy(ck->g->unitd[i]->t);
		free(ck->g->unitd[i]);
		sfSprite_destroy(ck->g->lifeg[i]->s);
		sfTexture_destroy(ck->g->lifeg[i]->t);
		free(ck->g->lifeg[i]);
		sfSprite_destroy(ck->g->lifed[i]->s);
		sfTexture_destroy(ck->g->lifed[i]->t);
		free(ck->g->lifed[i]);
	}
	destroy_part_5(ck);
}
