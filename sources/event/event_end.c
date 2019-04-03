/*
** EPITECH PROJECT, 2018
** My_Cook / Event
** File description:
** eventE.c
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

int react_to_mouse_return_end(ck_t *ck)
{
	if ((ck->mouse_pos.x > 732 && ck->mouse_pos.x < 1188) &&
	(ck->mouse_pos.y > 700 && ck->mouse_pos.y < 915)) {
		ck->g->button[0]->r.top = 216;
		sfSprite_setTextureRect(ck->g->button[0]->s,
			ck->g->button[0]->r);
	} else {
		ck->g->button[0]->r.top = 0;
		sfSprite_setTextureRect(ck->g->button[0]->s,
			ck->g->button[0]->r);
	}
	if ((ck->mouse_pos.x > 732 && ck->mouse_pos.x < 1188) &&
	(ck->mouse_pos.y > 700 && ck->mouse_pos.y < 915) &&
	ck->mouse_pressed == 1) {
		return (1);
	}
	return (0);
}

void end_game_time(ck_t *ck)
{
	if (ck->s->cstl_life[0] <= ck->s->cstl_life[1]) {
		ck->g->who_win = 0;
		ck->scene = 5;
		sfWindow_setMouseCursorVisible((sfWindow *)ck->wdw->wdw, 1);
	}
	if (ck->s->cstl_life[1] <= ck->s->cstl_life[0]) {
		ck->g->who_win = 1;
		ck->scene = 5;
		sfWindow_setMouseCursorVisible((sfWindow *)ck->wdw->wdw, 1);
	}
}
