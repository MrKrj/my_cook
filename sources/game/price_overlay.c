/*
** EPITECH PROJECT, 2018
** My_Cook / game
** File description:
** price_overlay.c
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

void set_price_overlay(ck_t *ck)
{
	if (ck->g->cursg[0] > 0) {
		price_overlay_gmenu(ck);
		display_price_gmenu(ck);
	}
	if (ck->g->cursg[0] < 0) {
		price_overlay_gmoved(ck);
		display_price_gmoved(ck);
	}
	if (ck->g->cursd[0] > 0) {
		price_overlay_dmenu(ck);
		display_price_dmenu(ck);
	}
	if (ck->g->cursd[0] < 0) {
		price_overlay_dmoved(ck);
		display_price_dmoved(ck);
	}
}

void price_overlay_gmenu(ck_t *ck)
{
	switch (ck->g->cursg[0]) {
		case 1:
			ck->g->curs[0]->r.height = 131;
			break;
		case 2:
			ck->g->curs[0]->r.height = 185;
			break;
		case 3:
			if (ck->s->level[0] < 4)
				ck->g->curs[0]->r.height = 185;
			if (ck->s->level[0] == 4)
				ck->g->curs[0]->r.height = 131;
			break;
		case 4:
			ck->g->curs[0]->r.height = 131;
			break;
	}
	sfSprite_setTextureRect(ck->g->curs[0]->s, ck->g->curs[0]->r);
}

void price_overlay_gmoved(ck_t *ck)
{
	switch (ck->g->cursg[0]) {
		case -1:
			ck->g->curs[0]->r.height = 185;
			break;
		case -2:
			ck->g->curs[0]->r.height = 185;
			break;
		case -3:
			ck->g->curs[0]->r.height = 185;
			break;
		case -4:
			ck->g->curs[0]->r.height = 185;
			break;
	}
	sfSprite_setTextureRect(ck->g->curs[0]->s, ck->g->curs[0]->r);
}

void price_overlay_dmenu(ck_t *ck)
{
	switch (ck->g->cursd[0]) {
		case 1:
			ck->g->curs[1]->r.height = 131;
			break;
		case 2:
			ck->g->curs[1]->r.height = 185;
			break;
		case 3:
			if (ck->s->level[1] < 4)
				ck->g->curs[1]->r.height = 185;
			if (ck->s->level[1] == 4)
				ck->g->curs[1]->r.height = 131;
			break;
		case 4:
			ck->g->curs[1]->r.height = 131;
			break;
	}
	sfSprite_setTextureRect(ck->g->curs[1]->s, ck->g->curs[1]->r);
}

void price_overlay_dmoved(ck_t *ck)
{
	switch (ck->g->cursd[0]) {
		case -1:
			ck->g->curs[1]->r.height = 185;
			break;
		case -2:
			ck->g->curs[1]->r.height = 185;
			break;
		case -3:
			ck->g->curs[1]->r.height = 185;
			break;
		case -4:
			ck->g->curs[1]->r.height = 185;
			break;
	}
	sfSprite_setTextureRect(ck->g->curs[1]->s, ck->g->curs[1]->r);
}
