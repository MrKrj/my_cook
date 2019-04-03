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

int set_moved_menug(ck_t *ck)
{
	ck->g->menu[0]->t = sfTexture_createFromFile("ext/mov.png", NULL);
	if (!ck->g->menu[0]->t)
		return (84);
	ck->g->menu[0]->s = sfSprite_create();
	ck->g->menu[0]->r.top = 0;
	ck->g->menu[0]->r.width = 626;
	ck->g->menu[0]->r.height = 130;
	ck->g->menu[0]->r.left = 0;
	ck->g->menu[0]->p.x = 15;
	ck->g->menu[0]->p.y = 0;
	sfSprite_setPosition(ck->g->menu[0]->s, ck->g->menu[0]->p);
	sfSprite_setTexture(ck->g->menu[0]->s, ck->g->menu[0]->t, 1);
	sfSprite_setTextureRect(ck->g->menu[0]->s, ck->g->menu[0]->r);
	ck->g->movedMenu[0] = 0;
	return (0);
}

int set_moved_menud(ck_t *ck)
{
	ck->g->menu[1]->t = sfTexture_createFromFile("ext/mov.png", NULL);
	if (!ck->g->menu[1]->t)
		return (84);
	ck->g->menu[1]->s = sfSprite_create();
	ck->g->menu[1]->r.top = 0;
	ck->g->menu[1]->r.width = 626;
	ck->g->menu[1]->r.height = 130;
	ck->g->menu[1]->r.left = 627;
	ck->g->menu[1]->p.x = 1282;
	ck->g->menu[1]->p.y = 0;
	sfSprite_setPosition(ck->g->menu[1]->s, ck->g->menu[1]->p);
	sfSprite_setTexture(ck->g->menu[1]->s, ck->g->menu[1]->t, 1);
	sfSprite_setTextureRect(ck->g->menu[1]->s, ck->g->menu[1]->r);
	ck->g->movedMenu[1] = 0;
	return (0);
}

int set_gold(ck_t *ck)
{
	sfVector2f size = {2, 2};
	sfVector2f posg = {750, 65};
	sfVector2f posd = {1150, 65};
	ck->s->goldg = sfText_create();
	if (!ck->s->goldg)
		return (84);
	ck->s->font = sfFont_createFromFile("ext/font.otf");
	sfText_setFont(ck->s->goldg, ck->s->font);
	sfText_setColor(ck->s->goldg, sfBlack);
	sfText_setPosition(ck->s->goldg, posg);
	sfText_setScale(ck->s->goldg, size);
	ck->s->goldd = sfText_create();
	if (!ck->s->goldd)
		return (84);
	sfText_setFont(ck->s->goldd, ck->s->font);
	sfText_setColor(ck->s->goldd, sfBlack);
	sfText_setPosition(ck->s->goldd, posd);
	sfText_setScale(ck->s->goldd, size);
	return (0);
}

int set_time(ck_t *ck)
{
	sfVector2f pos = {855, 175};
	sfVector2f size = {2, 2};
	ck->t->chronotxt = sfText_create();
	ck->s->state_timer[0] = 0;
	ck->s->state_timer[1] = 0;
	if (!ck->t->chronotxt)
		return (84);
	sfText_setFont(ck->t->chronotxt, ck->s->font);
	sfText_setColor(ck->t->chronotxt, sfBlack);
	sfText_setPosition(ck->t->chronotxt, pos);
	sfText_setScale(ck->t->chronotxt, size);
	return (0);
}

int set_overlay(ck_t *ck)
{
	sfVector2f size = {1.5, 1.5};
	sfVector2f pos = {855, 175};
	ck->s->overlayg = sfText_create();
	if (!ck->s->overlayg)
		return (84);
	sfText_setString(ck->s->overlayg, "NULL");
	sfText_setFont(ck->s->overlayg, ck->s->font);
	sfText_setColor(ck->s->overlayg, sfBlack);
	sfText_setPosition(ck->s->overlayg, pos);
	sfText_setScale(ck->s->overlayg, size);
	ck->s->overlayd = sfText_create();
	if (!ck->s->overlayd)
		return (84);
	sfText_setString(ck->s->overlayd, "NULL");
	sfText_setFont(ck->s->overlayd, ck->s->font);
	sfText_setColor(ck->s->overlayd, sfBlack);
	sfText_setPosition(ck->s->overlayd, pos);
	sfText_setScale(ck->s->overlayd, size);
	return (0);
}
