/*
** EPITECH PROJECT, 2018
** My_Cook / Texture
** File description:
** texture.c
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

int texture_menu(ck_t *ck)
{
	for (int i = 0; i < 3; i++)
		ck->m->bck[i] = malloc(sizeof(spt_t));
	for (int i = 0; i < 6; i++)
		ck->m->pllx[i] = malloc(sizeof(spt_t));
	if (set_bck_menu_and_menu_menu(ck) == 84 || set_pllx_menu_one(ck) == 84)
		return (84);
	if (set_pllx_menu_two(ck) == 84 || set_pllx_menu_three(ck) == 84)
		return (84);
	if (set_text_menu_one(ck) == 84 || set_text_menu_two(ck) == 84)
		return (84);
	if (set_logo_menu(ck) == 84)
		return (84);
	return (0);
}

int texture_pause(ck_t *ck)
{
	for (int i = 0; i < 2; i++)
		ck->p->bck[i] = malloc(sizeof(spt_t));
	if (set_bck_pause(ck) == 84)
		return (84);
	if (set_text_pause_one(ck) == 84 || set_text_pause_two(ck) == 84)
		return (84);
	return (0);
}

int texture_option(ck_t *ck)
{
	for (int i = 0; i < 2; i++) {
		ck->o->bck[i] = malloc(sizeof(spt_t));
		ck->o->sound[i] = malloc(sizeof(spt_t));
	}
	for (int i = 0; i < 6; i++)
		ck->o->text[i] = malloc(sizeof(sfText *));
	for (int i = 0; i < 5; i++)
		ck->o->button[i] = malloc(sizeof(spt_t));
	if (set_bck_option_and_menu_option(ck) == 84 ||
	set_sound_option(ck) == 84)
		return (84);
	if (set_text_option(ck) == 84 || set_return(ck) == 84)
		return (84);
	return (0);
}

int texture_game(ck_t *ck)
{
	for (int i = 0; i < 2; i++) {
		ck->g->bck[i] = malloc(sizeof(spt_t));
		ck->g->cstl[i] = malloc(sizeof(spt_t));
		ck->g->curs[i] = malloc(sizeof(spt_t));
		ck->g->menu[i] = malloc(sizeof(spt_t));
		ck->g->life[i] = malloc(sizeof(spt_t));
		ck->g->end[i] = malloc(sizeof(spt_t));
	}
	for (int i = 0; i < 5; i++) {
		ck->g->unitg[i] = malloc(sizeof(spt_t));
		ck->g->unitd[i] = malloc(sizeof(spt_t));
		ck->g->lifeg[i] = malloc(sizeof(spt_t));
		ck->g->lifed[i] = malloc(sizeof(spt_t));
	}
	ck->g->button[0] = malloc(sizeof(spt_t));
	if (set_bck_game_and_menu_game(ck) == 84)
		return (84);
	if (texture_game_set_one(ck) == 84 || texture_game_set_two(ck) == 84)
		return (84);
	return (0);
}

int texture(ck_t *ck)
{
	if (texture_game(ck) == 84)
		return (84);
	if (texture_menu(ck) == 84)
		return (84);
	if (texture_pause(ck) == 84)
		return (84);
	if (texture_option(ck) == 84)
		return (84);
	return (0);
}
