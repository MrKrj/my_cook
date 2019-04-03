/*
** EPITECH PROJECT, 2018
** My_Cook / Texture
** File description:
** texturegset.c
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

int texture_game_set_one(ck_t *ck)
{
	if (set_cstl_g(ck) == 84 || set_cstl_d(ck) == 84)
		return (84);
	if (set_curs_g(ck) == 84 || set_curs_d(ck) == 84)
		return (84);
	if (set_moved_menug(ck) == 84 || set_moved_menud(ck) == 84)
		return (84);
	if (set_gold(ck) == 84 || set_time(ck) == 84)
		return (84);
	if (set_overlay(ck) == 84 || set_life_overlay(ck) == 84)
		return (84);
	if (set_glife(ck) == 84 || set_dlife(ck) == 84)
		return (84);
	if (set_entityg(ck) == 84 || set_entityd(ck) == 84)
		return (84);
	if (set_lifeg(ck) == 84 || set_lifed(ck) == 84)
		return (84);
	return (0);
}

int texture_game_set_two(ck_t *ck)
{
	if (set_end(ck) == 84 || set_button_end(ck) == 84)
		return (84);
	for (int i = 0; i < 5; i++) {
		ck->g->unitg[i]->chrono = 0;
		ck->g->unitd[i]->chrono = 0;
	}
	return (0);
}
