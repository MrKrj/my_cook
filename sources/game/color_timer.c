/*
** EPITECH PROJECT, 2018
** My_Cook / game
** File description:
** color_timer.c
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

void color_timer(ck_t *ck)
{
	int add = 0;
	if (ck->s->level[0] > 3 || ck->s->level[1] > 3) {
		if (ck->s->state_timer[1] == 0) {
			sfText_setColor(ck->t->chronotxt, sfBlack);
			add = 1;
		} else {
			sfText_setColor(ck->t->chronotxt, sfRed);
			add = -1;
		}
	}
	ck->s->state_timer[1] += add;
}
