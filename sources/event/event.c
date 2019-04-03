/*
** EPITECH PROJECT, 2018
** My_Cook / Event
** File description:
** event.c
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

int event_menu(ck_t *ck)
{
	react_to_mouse_pos_menu(ck);
	if (react_to_mouseclick_menu(ck) == 1)
		return (1);
	return (0);
}

int event_option(ck_t *ck)
{
	react_to_mouse_sound(ck);
	react_to_click_sound(ck);
	react_to_mouse_return(ck);
	react_to_mouse_cheat_one(ck);
	return (0);
}

int event_pause(ck_t *ck)
{
	react_to_mouse_pos_pause(ck);
	react_to_mouseclick_pause(ck);
	if (ck->wdw->event.type == sfEvtKeyPressed) {
		if (sfKeyboard_isKeyPressed(sfKeyEscape) == 1 ||
		sfKeyboard_isKeyPressed(sfKeyDelete) == 1) {
			ck->scene = 3;
			sfWindow_setMouseCursorVisible((sfWindow *)ck->wdw->wdw,
			0);
		}
	}
	return (0);
}

int event_game(ck_t *ck)
{
	react_to_keyboard(ck);
	return (0);
}

int event_end(ck_t *ck)
{
	if (react_to_mouse_return_end(ck) == 1)
		return (1);
	return (0);
}
