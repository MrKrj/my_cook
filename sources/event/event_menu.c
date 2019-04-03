/*
** EPITECH PROJECT, 2018
** My_Cook / Event
** File description:
** eventM.c
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

void react_to_mouse_pos_menu_2(ck_t *ck)
{
	if ((ck->mouse_pos.x > 1450 && ck->mouse_pos.x < 1879) &&
	(ck->mouse_pos.y > 673 && ck->mouse_pos.y < 886)) {
		ck->m->bck[1]->r.left = 1287;
		sfSprite_setTextureRect(ck->m->bck[1]->s, ck->m->bck[1]->r);
	} else {
		ck->m->bck[1]->r.left = 0;
		sfSprite_setTextureRect(ck->m->bck[1]->s, ck->m->bck[1]->r);
	}
}

void react_to_mouse_pos_menu(ck_t *ck)
{
	if ((ck->mouse_pos.x > 1450 && ck->mouse_pos.x < 1879) &&
	(ck->mouse_pos.y > 200 && ck->mouse_pos.y < 415)) {
		ck->m->bck[1]->r.left = 429;
		sfSprite_setTextureRect(ck->m->bck[1]->s, ck->m->bck[1]->r);
	} else if ((ck->mouse_pos.x > 1450 && ck->mouse_pos.x < 1879) &&
	(ck->mouse_pos.y > 437 && ck->mouse_pos.y < 650)) {
		ck->m->bck[1]->r.left = 858;
		sfSprite_setTextureRect(ck->m->bck[1]->s, ck->m->bck[1]->r);
	} else
		react_to_mouse_pos_menu_2(ck);
}

int react_to_mouseclick_menu(ck_t *ck)
{
	if (ck->mouse_pos.x > 1450 && ck->mouse_pos.x < 1879) {
		if (ck->mouse_pos.y > 200 && ck->mouse_pos.y < 415 &&
			ck->mouse_pressed == 1) {
			ck->scene = 3;
			sfMusic_destroy(ck->wdw->music);
			set_music(ck, "ext/music/game.ogg");
			sfWindow_setMouseCursorVisible((sfWindow *)ck->wdw->wdw,
			0);
		}
		if (ck->mouse_pos.y > 437 && ck->mouse_pos.y < 650 &&
			ck->mouse_pressed == 1) {
			ck->last_scene = ck->scene;
			ck->scene = 2;
		}
		if (ck->mouse_pos.y > 673 && ck->mouse_pos.y < 886 &&
			ck->mouse_pressed == 1) {
			return (1);
		}
	}
	return (0);
}
