/*
** EPITECH PROJECT, 2018
** My_Cook / Texture
** File description:
** textureg.c
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

int set_bck_game_and_menu_game(ck_t *ck)
{
	ck->g->bck[0]->t = sfTexture_createFromFile("ext/bckG.png", NULL);
	if (!ck->g->bck[0]->t)
		return (84);
	ck->g->bck[0]->s = sfSprite_create();
	sfSprite_setTexture(ck->g->bck[0]->s, ck->g->bck[0]->t, 1);
	ck->g->bck[1]->t = sfTexture_createFromFile("ext/barre.png", NULL);
	if (!ck->g->bck[1]->t)
		return (84);
	ck->g->bck[1]->s = sfSprite_create();
	sfSprite_setTexture(ck->g->bck[1]->s, ck->g->bck[1]->t, 1);
	return (0);
}

int set_cstl_g(ck_t *ck)
{
	sfVector2f scale = {2, 2};
	ck->g->cstl[0]->t = sfTexture_createFromFile("ext/cstlG.png", NULL);
	if (!ck->g->cstl[0]->t)
		return (84);
	ck->g->cstl[0]->s = sfSprite_create();
	ck->g->cstl[0]->r.top = 0;
	ck->g->cstl[0]->r.width = 68.25;
	ck->g->cstl[0]->r.height = 299;
	ck->g->cstl[0]->r.left = 205;
	ck->g->cstl[0]->p.x = 0;
	ck->g->cstl[0]->p.y = 480;
	sfSprite_setScale(ck->g->cstl[0]->s, scale);
	sfSprite_setPosition(ck->g->cstl[0]->s, ck->g->cstl[0]->p);
	sfSprite_setTexture(ck->g->cstl[0]->s, ck->g->cstl[0]->t, 1);
	sfSprite_setTextureRect(ck->g->cstl[0]->s, ck->g->cstl[0]->r);
	return (0);
}

int set_cstl_d(ck_t *ck)
{
	sfVector2f scale = {2, 2};
	ck->g->cstl[1]->t = sfTexture_createFromFile("ext/cstlD.png", NULL);
	if (!ck->g->cstl[1]->t)
		return (84);
	ck->g->cstl[1]->s = sfSprite_create();
	ck->g->cstl[1]->r.top = 0;
	ck->g->cstl[1]->r.width = 68.5;
	ck->g->cstl[1]->r.height = 299;
	ck->g->cstl[1]->r.left = 0;
	ck->g->cstl[1]->p.x = 1790;
	ck->g->cstl[1]->p.y = 480;
	sfSprite_setScale(ck->g->cstl[1]->s, scale);
	sfSprite_setPosition(ck->g->cstl[1]->s, ck->g->cstl[1]->p);
	sfSprite_setTexture(ck->g->cstl[1]->s, ck->g->cstl[1]->t, 1);
	sfSprite_setTextureRect(ck->g->cstl[1]->s, ck->g->cstl[1]->r);
	return (0);
}

int set_curs_g(ck_t *ck)
{
	ck->g->curs[0]->t = sfTexture_createFromFile("ext/cursor.png", NULL);
	if (!ck->g->curs[0]->t)
		return (84);
	ck->g->curs[0]->s = sfSprite_create();
	ck->g->curs[0]->r.top = 0;
	ck->g->curs[0]->r.width = 135;
	ck->g->curs[0]->r.height = 131;
	ck->g->curs[0]->r.left = 0;
	ck->g->curs[0]->p.x = 15;
	ck->g->curs[0]->p.y = 20;
	sfSprite_setPosition(ck->g->curs[0]->s, ck->g->curs[0]->p);
	sfSprite_setTexture(ck->g->curs[0]->s, ck->g->curs[0]->t, 1);
	sfSprite_setTextureRect(ck->g->curs[0]->s, ck->g->curs[0]->r);
	ck->g->cursg[0] = 1;
	ck->g->cursg[1] = 15;
	ck->g->cursg[2] = 178;
	ck->g->cursg[3] = 345;
	ck->g->cursg[4] = 506;
	return (0);
}

int set_curs_d(ck_t *ck)
{
	ck->g->curs[1]->t = sfTexture_createFromFile("ext/cursor.png", NULL);
	if (!ck->g->curs[1]->t)
		return (84);
	ck->g->curs[1]->s = sfSprite_create();
	ck->g->curs[1]->r.top = 0;
	ck->g->curs[1]->r.width = 135;
	ck->g->curs[1]->r.height = 131;
	ck->g->curs[1]->r.left = 0;
	ck->g->curs[1]->p.x = 1773;
	ck->g->curs[1]->p.y = 18;
	sfSprite_setPosition(ck->g->curs[1]->s, ck->g->curs[1]->p);
	sfSprite_setTexture(ck->g->curs[1]->s, ck->g->curs[1]->t, 1);
	sfSprite_setTextureRect(ck->g->curs[1]->s, ck->g->curs[1]->r);
	ck->g->cursd[0] = 1;
	ck->g->cursd[1] = 1773;
	ck->g->cursd[2] = 1612;
	ck->g->cursd[3] = 1445;
	ck->g->cursd[4] = 1283;
	return (0);
}
