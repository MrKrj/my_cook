/*
** EPITECH PROJECT, 2018
** My_Cook / Event
** File description:
** eventgMenu.c
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

int react_to_enter_g(ck_t *ck)
{
	if (sfKeyboard_isKeyPressed(sfKeyA) == 1) {
		if (ck->g->cursg[0] > 0)
			react_to_enter_g_menu(ck);
		if (ck->g->cursg[0] < 1)
			react_to_enter_g_moved_menu(ck);
	}
	return (0);
}

int react_to_enter_d(ck_t *ck)
{
	if (sfKeyboard_isKeyPressed(sfKeyP) == 1) {
		if (ck->g->cursd[0] > 0)
			react_to_enter_d_menu(ck);
		if (ck->g->cursd[0] < 1)
			react_to_enter_d_moved_menu(ck);
	}
	return (0);
}

int react_to_enter_g_menu(ck_t *ck)
{
	switch (ck->g->cursg[0]) {
		case 1:
			display_menug(ck);
			break;
		case 2:
			healg(ck);
			break;
		case 3:
			upgradeg(ck);
			break;
		case 4:
			freezeg(ck);
			break;
	}
	return (0);
}

int react_to_enter_d_menu(ck_t *ck)
{
	switch (ck->g->cursd[0]) {
		case 1:
			display_menud(ck);
			break;
		case 2:
			heald(ck);
			break;
		case 3:
			upgraded(ck);
			break;
		case 4:
			freezed(ck);
			break;
	}
	return (0);
}
