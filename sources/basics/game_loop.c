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

int which_scene_event(ck_t *ck)
{
	switch (ck->scene) {
		case 0:
			if (event_menu(ck) == 1)
				return (1);
			break;
		case 1:
			if (event_pause(ck) == 1)
				return (1);
			break;
		case 2:
			if (event_option(ck) == 1)
				return (1);
			break;
		case 3:
			if (event_game(ck) == 1)
				return (1);
			break;
	}
	return (0);
}

int manage_event(ck_t *ck)
{
	ck->mouse_pos = sfMouse_getPosition((sfWindow *)ck->wdw->wdw);
	ck->mouse_pressed = sfMouse_isButtonPressed(sfMouseLeft);
	while (sfRenderWindow_pollEvent(ck->wdw->wdw, &ck->wdw->event)) {
		if (which_scene_event(ck) == 1)
			return (1);
		if (ck->wdw->event.type == sfEvtClosed) {
			sfRenderWindow_close(ck->wdw->wdw);
			return (1);
		}
	}
	return (0);
}

int which_scene(ck_t *ck)
{
	switch (ck->scene) {
		case 0:
			if (menu(ck) == 84)
				return (84);
			break;
		case 1:
			if (freeze(ck) == 84)
				return (84);
			break;
		case 2:
			if (option(ck) == 84)
				return (84);
			break;
		case 3:
			if (game(ck) == 84)
				return (84);
			break;
	}
	return (0);
}

int start(ck_t *ck)
{
	int end = 0;
	sfClock_restart(ck->wdw->clock);
	if (texture(ck) == 84)
		return (84);
	set_music(ck, "ext/music/menu.ogg");
	while (sfRenderWindow_isOpen(ck->wdw->wdw)) {
		sfRenderWindow_display(ck->wdw->wdw);
		ck->wdw->elapsed =
		sfClock_restart(ck->wdw->clock).microseconds / 1000000.f;
		if (ck->scene == 5)
			end = event_end(ck);
		if (manage_event(ck) == 1 || end == 1)
			break;
		if (which_scene(ck) == 84)
			return (84);
		if (ck->scene == 5)
			end_game(ck);
	}
	destroy(ck);
	return (0);
}

void destroy_part_5(ck_t *ck)
{
	free(ck->m);
	free(ck->o);
	free(ck->p);
	free(ck->g);
	free(ck->s);
	free(ck->t);
	sfRenderWindow_destroy(ck->wdw->wdw);
	free(ck->wdw);
}
