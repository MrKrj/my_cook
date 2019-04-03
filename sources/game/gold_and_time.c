/*
** EPITECH PROJECT, 2018
** My_Cook / game
** File description:
** gold_and_time.c
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

void add_one_to_time(ck_t *ck, char *str)
{
	if (str[8] != '9')
		str[12]++;
	if (str[12] > '9') {
		str[12] = '0';
		str[11]++;
	}
	if (str[11] > '5') {
		str[11] = '0';
		str[9]++;
	}
	if (str[9] > '9') {
		str[9] = '0';
		str[8]++;
	}
	sfText_setString(ck->t->chronotxt, str);
}

void sub_one_to_time(ck_t *ck, char *str)
{
	if (my_strcmp(str, "Chrono  00:00") != 0)
		str[12]--;
	if (str[12] < '0') {
		str[12] = '9';
		str[11]--;
	}
	if (str[11] < '0') {
		str[11] = '5';
		str[9]--;
	}
	if (str[9] < '0') {
		str[9] = '9';
		str[8]--;
	}
	if (my_strcmp(str, "Chrono  00:30") == 0)
		ck->s->state_timer[0] = 1;
	sfText_setString(ck->t->chronotxt, str);
}

void update_time(ck_t *ck)
{
	static char str[13] = "Chrono  00:01";
	ck->t->chrono += ck->wdw->elapsed;
	if (ck->t->chrono > 1.0) {
		if (ck->s->level[0] < 4 && ck->s->level[1] < 4)
			add_one_to_time(ck, str);
		if (ck->s->level[0] > 3 || ck->s->level[1] > 3)
			sub_one_to_time(ck, str);
		if (ck->s->state_timer[0] == 1)
			color_timer(ck);
		ck->t->chrono -= 1.0;
	}
	if (my_strcmp(str, "Chrono  00:00") == 0 && ck->cheat != 1) {
		end_game_time(ck);
	}
	sfText_setString(ck->t->chronotxt, str);
}

void move_right_gold(ck_t *ck)
{
	sfVector2f posd = {1150, 65};
	int nb = my_strlen_int(ck->s->gold[1]);
	posd.x = 1150 - ((nb - 1) * 18);
	sfText_setPosition(ck->s->goldd, posd);
}

void update_gold(ck_t *ck)
{
	ck->s->time_gold += ck->wdw->elapsed;
	if (ck->s->time_gold > 1.0) {
		if (ck->s->gold[0] < 1000000)
			ck->s->gold[0] += ck->s->ratio_gold[0];
		if (ck->s->gold[1] < 1000000)
			ck->s->gold[1] += ck->s->ratio_gold[1];
		ck->g->clickg++;
		ck->g->clickd++;
		ck->s->time_gold -= 1.0;
	}
	move_right_gold(ck);
	sfText_setString(ck->s->goldg, my_itoa(ck->s->gold[0]));
	sfText_setString(ck->s->goldd, my_itoa(ck->s->gold[1]));
}
