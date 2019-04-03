/*
** EPITECH PROJECT, 2018
** My_Cook / Option
** File description:
** option.c
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

void update_option(ck_t *ck)
{
	(void)ck;
}

void render_option(ck_t *ck)
{
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->o->bck[0]->s, NULL);
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->o->sound[0]->s, NULL);
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->o->sound[1]->s, NULL);
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->o->bck[1]->s, NULL);
	for (int i = 0; i < 5; i++)
		sfRenderWindow_drawSprite(ck->wdw->wdw,
		ck->o->button[i]->s, NULL);
	for (int i = 0; i < 6; i++)
		sfRenderWindow_drawText(ck->wdw->wdw, ck->o->text[i], NULL);
}

int option(ck_t *ck)
{
	update_option(ck);
	render_option(ck);
	return (0);
}
