/*
** EPITECH PROJECT, 2018
** My_Cook / Menu
** File description:
** menu.c
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

void update_menu(ck_t *ck)
{
	int tmp = 150;
	for (int i = 0; i < 6; i++) {
		ck->m->pllx[i]->p.x -= tmp * ck->wdw->elapsed;
		tmp /= 1.5;
		if (ck->m->pllx[i]->p.x < -1920)
			ck->m->pllx[i]->p.x = 0;
		sfSprite_setPosition(ck->m->pllx[i]->s, ck->m->pllx[i]->p);
	}
}

void render_menu(ck_t *ck)
{
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->m->bck[0]->s, NULL);
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->m->bck[1]->s, NULL);
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->m->pllx[0]->s, NULL);
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->m->pllx[1]->s, NULL);
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->m->pllx[2]->s, NULL);
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->m->pllx[3]->s, NULL);
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->m->pllx[4]->s, NULL);
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->m->pllx[5]->s, NULL);
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->m->bck[1]->s, NULL);
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->m->bck[2]->s, NULL);
	sfRenderWindow_drawText(ck->wdw->wdw, ck->m->jouer, NULL);
	sfRenderWindow_drawText(ck->wdw->wdw, ck->m->options, NULL);
	sfRenderWindow_drawText(ck->wdw->wdw, ck->m->quitter, NULL);
}

int menu(ck_t *ck)
{
	update_menu(ck);
	render_menu(ck);
	return (0);
}
