/*
** EPITECH PROJECT, 2018
** My_Cook / Event
** File description:
** eventg.c
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

int react_to_keyboard(ck_t *ck)
{
	if (ck->wdw->event.type == sfEvtKeyPressed) {
		react_to_keyboard_g(ck);
		react_to_keyboard_d(ck);
		react_to_moved_menu_g(ck);
		react_to_moved_menu_d(ck);
		react_to_enter_g(ck);
		react_to_enter_d(ck);
		if (sfKeyboard_isKeyPressed(sfKeyEscape) == 1 ||
		sfKeyboard_isKeyPressed(sfKeyDelete) == 1) {
			ck->scene = 1;
			sfWindow_setMouseCursorVisible((sfWindow *)ck->wdw->wdw,
			1);
		}
	}
	return (0);
}

int react_to_keyboard_g(ck_t *ck)
{
	if (sfKeyboard_isKeyPressed(sfKeyQ) == 1 && ck->g->cursg[0] > 1 &&
	ck->g->cursg[0] < 5) {
		ck->g->cursg[0] -= 1;
		ck->g->curs[0]->p.x = ck->g->cursg[ck->g->cursg[0]];
		sfSprite_setPosition(ck->g->curs[0]->s, ck->g->curs[0]->p);
	}
	if (sfKeyboard_isKeyPressed(sfKeyD) == 1 && ck->g->cursg[0] > 0 &&
	ck->g->cursg[0] < 4) {
		ck->g->cursg[0] += 1;
		ck->g->curs[0]->p.x = ck->g->cursg[ck->g->cursg[0]];
		sfSprite_setPosition(ck->g->curs[0]->s, ck->g->curs[0]->p);
		if (ck->g->cursg[0] > 1) {
			ck->g->menu[0]->p.y = 0;
			ck->g->movedMenu[0] = 0;
			sfSprite_setPosition(ck->g->menu[0]->s,
				ck->g->menu[0]->p);
		}
	}
	return (0);
}

int react_to_keyboard_d(ck_t *ck)
{
	if (sfKeyboard_isKeyPressed(sfKeyM) == 1 && ck->g->cursd[0] > 1 &&
	ck->g->cursd[0] < 5) {
		ck->g->cursd[0] -= 1;
		ck->g->curs[1]->p.x = ck->g->cursd[ck->g->cursd[0]];
		sfSprite_setPosition(ck->g->curs[1]->s, ck->g->curs[1]->p);
	}
	if (sfKeyboard_isKeyPressed(sfKeyK) == 1 && ck->g->cursd[0] > 0 &&
	ck->g->cursd[0] < 4) {
		ck->g->cursd[0] += 1;
		ck->g->curs[1]->p.x = ck->g->cursd[ck->g->cursd[0]];
		sfSprite_setPosition(ck->g->curs[1]->s, ck->g->curs[1]->p);
		if (ck->g->cursd[1] > 2) {
			ck->g->menu[1]->p.y = 0;
			ck->g->movedMenu[1] = 0;
			sfSprite_setPosition(ck->g->menu[1]->s,
				ck->g->menu[1]->p);
		}
	}
	return (0);
}

int react_to_moved_menu_g(ck_t *ck)
{
	if (sfKeyboard_isKeyPressed(sfKeyS) == 1 && ck->g->cursg[0] == 1 &&
	ck->g->movedMenu[0] == 1) {
		ck->g->cursg[0] = -1;
		ck->g->curs[0]->p.y += 233;
		sfSprite_setPosition(ck->g->curs[0]->s, ck->g->curs[0]->p);
	}
	if (sfKeyboard_isKeyPressed(sfKeyZ) == 1 && ck->g->cursg[0] == -1 &&
	ck->g->movedMenu[0] == 1) {
		ck->g->cursg[0] = 1;
		ck->g->curs[0]->p.y -= 233;
		sfSprite_setPosition(ck->g->curs[0]->s, ck->g->curs[0]->p);
	}
	if (sfKeyboard_isKeyPressed(sfKeyD) == 1 && ck->g->movedMenu[0] == 1)
		move_in_moved_menugg(ck);
	if (sfKeyboard_isKeyPressed(sfKeyQ) == 1 && ck->g->movedMenu[0] == 1)
		move_in_moved_menugd(ck);
	return (0);
}

int react_to_moved_menu_d(ck_t *ck)
{
	if (sfKeyboard_isKeyPressed(sfKeyL) == 1 && ck->g->cursd[0] == 1 &&
	ck->g->movedMenu[1] == 1) {
		ck->g->cursd[0] = -1;
		ck->g->curs[1]->p.y += 235;
		sfSprite_setPosition(ck->g->curs[1]->s, ck->g->curs[1]->p);
	}
	if (sfKeyboard_isKeyPressed(sfKeyO) == 1 && ck->g->cursd[0] == -1 &&
	ck->g->movedMenu[1] == 1) {
		ck->g->cursd[0] = 1;
		ck->g->curs[1]->p.y -= 235;
		sfSprite_setPosition(ck->g->curs[1]->s, ck->g->curs[1]->p);
	}
	if (sfKeyboard_isKeyPressed(sfKeyK) == 1 && ck->g->movedMenu[1] == 1)
		move_in_moved_menudg(ck);
	if (sfKeyboard_isKeyPressed(sfKeyM) == 1 && ck->g->movedMenu[1] == 1)
		move_in_moved_menudd(ck);
	return (0);
}
