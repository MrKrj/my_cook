/*
** EPITECH PROJECT, 2018
** My_Cook / Texture
** File description:
** texturegunit.c
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

int set_entityg(ck_t *ck)
{
	sfVector2f scale = {2, 2};
	for (int i = 0; i < 5; i++) {
		ck->g->unitg[i]->t = sfTexture_createFromFile("ext/mstr3.png",
		NULL);
		if (!ck->g->unitg[i]->t)
			return (84);
		ck->g->unitg[i]->s = sfSprite_create();
		ck->g->unitg[i]->r.top = 0;
		ck->g->unitg[i]->r.width = 200;
		ck->g->unitg[i]->r.height = 179;
		ck->g->unitg[i]->r.left = 0;
		ck->g->unitg[i]->p.x = 60;
		ck->g->unitg[i]->p.y = 700;
		ck->g->unitg[i]->state = 0;
		sfSprite_setPosition(ck->g->unitg[i]->s, ck->g->unitg[i]->p);
		sfSprite_setTexture(ck->g->unitg[i]->s, ck->g->unitg[i]->t, 1);
		sfSprite_setTextureRect(ck->g->unitg[i]->s, ck->g->unitg[i]->r);
		sfSprite_setScale(ck->g->unitg[i]->s, scale);
	}
	return (0);
}

int set_entityd(ck_t *ck)
{
	sfVector2f scale = {2, 2};
	for (int i = 0; i < 5; i++) {
		ck->g->unitd[i]->t = sfTexture_createFromFile("ext/mstr4.png",
		NULL);
		if (!ck->g->unitd[i]->t)
			return (84);
		ck->g->unitd[i]->s = sfSprite_create();
		ck->g->unitd[i]->r.top = 0;
		ck->g->unitd[i]->r.width = 200;
		ck->g->unitd[i]->r.height = 179;
		ck->g->unitd[i]->r.left = 2824;
		ck->g->unitd[i]->p.x = 1460;
		ck->g->unitd[i]->p.y = 700;
		ck->g->unitd[i]->state = 0;
		sfSprite_setPosition(ck->g->unitd[i]->s, ck->g->unitd[i]->p);
		sfSprite_setTexture(ck->g->unitd[i]->s, ck->g->unitd[i]->t, 1);
		sfSprite_setTextureRect(ck->g->unitd[i]->s, ck->g->unitd[i]->r);
		sfSprite_setScale(ck->g->unitd[i]->s, scale);
	}
	return (0);
}

int set_lifeg(ck_t *ck)
{
	for (int i = 0; i < 5; i++) {
		ck->g->lifeg[i]->t =
		sfTexture_createFromFile("ext/life.png", NULL);
		if (!ck->g->lifeg[i]->t)
			return (84);
		ck->g->lifeg[i]->s = sfSprite_create();
		ck->g->lifeg[i]->r.top = 0;
		ck->g->lifeg[i]->r.width = 200;
		ck->g->lifeg[i]->r.height = 43;
		ck->g->lifeg[i]->r.left = 0;
		ck->g->lifeg[i]->p.x = 300;
		ck->g->lifeg[i]->p.y = 700;
		ck->g->lifeg[i]->state = 0;
		sfSprite_setPosition(ck->g->lifeg[i]->s, ck->g->lifeg[i]->p);
		sfSprite_setTexture(ck->g->lifeg[i]->s, ck->g->lifeg[i]->t, 1);
		sfSprite_setTextureRect(ck->g->lifeg[i]->s, ck->g->lifeg[i]->r);
	}
	return (0);
}

int set_lifed(ck_t *ck)
{
	for (int i = 0; i < 5; i++) {
		ck->g->lifed[i]->t =
		sfTexture_createFromFile("ext/life.png", NULL);
		if (!ck->g->lifed[i]->t)
			return (84);
		ck->g->lifed[i]->s = sfSprite_create();
		ck->g->lifed[i]->r.top = 0;
		ck->g->lifed[i]->r.width = 200;
		ck->g->lifed[i]->r.height = 43;
		ck->g->lifed[i]->r.left = 0;
		ck->g->lifed[i]->p.x = 300;
		ck->g->lifed[i]->p.y = 700;
		ck->g->lifed[i]->state = 0;
		sfSprite_setPosition(ck->g->lifed[i]->s, ck->g->lifed[i]->p);
		sfSprite_setTexture(ck->g->lifed[i]->s, ck->g->lifed[i]->t, 1);
		sfSprite_setTextureRect(ck->g->lifed[i]->s, ck->g->lifed[i]->r);
	}
	return (0);
}
