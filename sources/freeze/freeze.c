/*
** EPITECH PROJECT, 2018
** My_Cook / Freeze
** File description:
** freeze.c
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

int update_pause(ck_t *ck)
{
	(void)ck;
	return (0);
}

void render_pause(ck_t *ck)
{
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->p->bck[0]->s, NULL);
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->p->bck[1]->s, NULL);
	sfRenderWindow_drawText(ck->wdw->wdw, ck->p->jouer, NULL);
	sfRenderWindow_drawText(ck->wdw->wdw, ck->p->options, NULL);
	sfRenderWindow_drawText(ck->wdw->wdw, ck->p->quitter, NULL);
}

int freeze(ck_t *ck)
{
	update_pause(ck);
	render_pause(ck);
	return (0);
}
