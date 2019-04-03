/*
** EPITECH PROJECT, 2018
** My_Cook / Texture
** File description:
** textureE.c
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

int set_end(ck_t *ck)
{
	ck->g->end[0]->t = sfTexture_createFromFile("ext/victory.png", NULL);
	ck->g->end[1]->t = sfTexture_createFromFile("ext/defaite.png", NULL);
	if (!ck->g->end[0]->t || !ck->g->end[1]->t)
		return (84);
	ck->g->end[0]->s = sfSprite_create();
	ck->g->end[1]->s = sfSprite_create();
	sfSprite_setTexture(ck->g->end[0]->s, ck->g->end[0]->t, 1);
	sfSprite_setTexture(ck->g->end[1]->s, ck->g->end[1]->t, 1);
	return (0);
}

int set_button_end(ck_t *ck)
{
	ck->g->button[0]->t = sfTexture_createFromFile("ext/return.png", NULL);
	if (!ck->g->button[0]->t)
		return (84);
	ck->g->button[0]->s = sfSprite_create();
	ck->g->button[0]->r.top = 0;
	ck->g->button[0]->r.width = 456;
	ck->g->button[0]->r.height = 215;
	ck->g->button[0]->r.left = 0;
	ck->g->button[0]->p.x = 732;
	ck->g->button[0]->p.y = 700;
	sfSprite_setPosition(ck->g->button[0]->s, ck->g->button[0]->p);
	sfSprite_setTexture(ck->g->button[0]->s, ck->g->button[0]->t, 1);
	sfSprite_setTextureRect(ck->g->button[0]->s, ck->g->button[0]->r);
	if (set_button_end_text(ck) == 84)
		return (84);
	return (0);
}

int set_button_end_text(ck_t *ck)
{
	sfVector2f pos = {810, 730};
	ck->g->end_button = sfText_create();
	if (!ck->g->end_button)
		return (84);
	sfText_setFont(ck->g->end_button, ck->s->font);
	sfText_setColor(ck->g->end_button, sfBlack);
	sfText_setCharacterSize(ck->g->end_button, 100);
	sfText_setString(ck->g->end_button, "End game");
	sfText_setPosition(ck->g->end_button, pos);
	return (0);
}
