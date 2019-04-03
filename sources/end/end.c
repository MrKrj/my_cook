/*
** EPITECH PROJECT, 2018
** My_Cook / End
** File description:
** end.c
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

void render_event(ck_t *ck)
{
	if (ck->g->who_win == 1)
		sfRenderWindow_drawSprite(ck->wdw->wdw, ck->g->end[0]->s, NULL);
	if (ck->g->who_win == 0)
		sfRenderWindow_drawSprite(ck->wdw->wdw, ck->g->end[1]->s, NULL);
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->g->button[0]->s, NULL);
	sfRenderWindow_drawText(ck->wdw->wdw, ck->g->end_button, NULL);
}

void end_game(ck_t *ck)
{
	render_event(ck);
}
