/*
** EPITECH PROJECT, 2018
** My_Cook / game
** File description:
** game.c
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

int update_game(ck_t *ck)
{
	add_time_to_monster(ck);
	update_gold(ck);
	update_time(ck);
	update_life(ck);
	update_life_digit(ck);
	set_price_overlay(ck);
	update_monster(ck);
	change_sprite_move(ck);
	return (0);
}

void render_game_two(ck_t *ck)
{
	for (int i = 0; i < 5; i++)
	{
		if (ck->g->unitg[i]->state == 1) {
			sfRenderWindow_drawSprite(ck->wdw->wdw,
			ck->g->unitg[i]->s, NULL);
			sfRenderWindow_drawSprite(ck->wdw->wdw,
			ck->g->lifeg[i]->s, NULL);
		}
		if (ck->g->unitd[i]->state == 1) {
			sfRenderWindow_drawSprite(ck->wdw->wdw,
			ck->g->unitd[i]->s, NULL);
			sfRenderWindow_drawSprite(ck->wdw->wdw,
			ck->g->lifed[i]->s, NULL);
		}
	}
}

void render_game(ck_t *ck)
{
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->g->bck[0]->s, NULL);
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->g->curs[0]->s, NULL);
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->g->curs[1]->s, NULL);
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->g->menu[0]->s, NULL);
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->g->menu[1]->s, NULL);
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->g->bck[1]->s, NULL);
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->g->life[0]->s, NULL);
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->g->life[1]->s, NULL);
	sfRenderWindow_drawText(ck->wdw->wdw, ck->s->life_cstlg, NULL);
	sfRenderWindow_drawText(ck->wdw->wdw, ck->s->life_cstld, NULL);
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->g->curs[0]->s, NULL);
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->g->curs[1]->s, NULL);
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->g->cstl[0]->s, NULL);
	sfRenderWindow_drawSprite(ck->wdw->wdw, ck->g->cstl[1]->s, NULL);
	sfRenderWindow_drawText(ck->wdw->wdw, ck->s->goldg, NULL);
	sfRenderWindow_drawText(ck->wdw->wdw, ck->s->goldd, NULL);
	sfRenderWindow_drawText(ck->wdw->wdw, ck->t->chronotxt, NULL);
	sfRenderWindow_drawText(ck->wdw->wdw, ck->s->overlayg, NULL);
	sfRenderWindow_drawText(ck->wdw->wdw, ck->s->overlayd, NULL);
	render_game_two(ck);
}

int game(ck_t *ck)
{
	if (update_game(ck) == 84)
		return (84);
	render_game(ck);
	return (0);
}
