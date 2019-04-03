/*
** EPITECH PROJECT, 2018
** My_Cook / Texture
** File description:
** textureglife.c
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

int set_glife(ck_t *ck)
{
	ck->g->life[0]->t = sfTexture_createFromFile("ext/lifec.png", NULL);
	if (!ck->g->life[0]->t)
		return (84);
	ck->g->life[0]->s = sfSprite_create();
	ck->g->life[0]->r.top = 0;
	ck->g->life[0]->r.width = 627;
	ck->g->life[0]->r.height = 43;
	ck->g->life[0]->r.left = 0;
	ck->g->life[0]->p.x = 15;
	ck->g->life[0]->p.y = 200;
	sfSprite_setPosition(ck->g->life[0]->s, ck->g->life[0]->p);
	sfSprite_setTexture(ck->g->life[0]->s, ck->g->life[0]->t, 1);
	sfSprite_setTextureRect(ck->g->life[0]->s, ck->g->life[0]->r);
	return (0);
}

int set_dlife(ck_t *ck)
{
	ck->g->life[1]->t = sfTexture_createFromFile("ext/lifec.png", NULL);
	if (!ck->g->life[1]->t)
		return (84);
	ck->g->life[1]->s = sfSprite_create();
	ck->g->life[1]->r.top = 0;
	ck->g->life[1]->r.width = 627;
	ck->g->life[1]->r.height = 43;
	ck->g->life[1]->r.left = 628;
	ck->g->life[1]->p.x = 1282;
	ck->g->life[1]->p.y = 200;
	sfSprite_setPosition(ck->g->life[1]->s, ck->g->life[1]->p);
	sfSprite_setTexture(ck->g->life[1]->s, ck->g->life[1]->t, 1);
	sfSprite_setTextureRect(ck->g->life[1]->s, ck->g->life[1]->r);
	return (0);
}

int set_life_overlay(ck_t *ck)
{
	sfVector2f size = {1.5, 1.5};
	sfVector2f posg = {290, 190};
	sfVector2f posd = {1570, 190};
	ck->s->life_cstlg = sfText_create();
	if (!ck->s->life_cstlg)
		return (84);
	sfText_setString(ck->s->life_cstlg, my_itoa(ck->s->cstl_life[0]));
	sfText_setFont(ck->s->life_cstlg, ck->s->font);
	sfText_setColor(ck->s->life_cstlg, sfBlack);
	sfText_setPosition(ck->s->life_cstlg, posg);
	sfText_setScale(ck->s->life_cstlg, size);
	ck->s->life_cstld = sfText_create();
	if (!ck->s->life_cstld)
		return (84);
	sfText_setString(ck->s->life_cstld, my_itoa(ck->s->cstl_life[1]));
	sfText_setFont(ck->s->life_cstld, ck->s->font);
	sfText_setColor(ck->s->life_cstld, sfBlack);
	sfText_setPosition(ck->s->life_cstld, posd);
	sfText_setScale(ck->s->life_cstld, size);
	return (0);
}
