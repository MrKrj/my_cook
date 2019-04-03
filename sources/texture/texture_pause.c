/*
** EPITECH PROJECT, 2018
** My_Cook / Texture
** File description:
** textureP.c
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

int set_bck_pause(ck_t *ck)
{
	ck->p->bck[0]->t = sfTexture_createFromFile("ext/pause.png", NULL);
	if (!ck->p->bck[0]->t)
		return (84);
	ck->p->bck[1]->t = sfTexture_createFromFile("ext/menM.png", NULL);
	if (!ck->p->bck[1]->t)
		return (84);
	ck->p->bck[0]->s = sfSprite_create();
	ck->p->bck[1]->s = sfSprite_create();
	ck->p->bck[1]->r.top = 0;
	ck->p->bck[1]->r.width = 429;
	ck->p->bck[1]->r.height = 688;
	ck->p->bck[1]->r.left = 0;
	ck->p->bck[1]->p.x = 1050;
	ck->p->bck[1]->p.y = 200;
	sfSprite_setTexture(ck->p->bck[0]->s, ck->p->bck[0]->t, 1);
	sfSprite_setPosition(ck->p->bck[1]->s, ck->p->bck[1]->p);
	sfSprite_setTexture(ck->p->bck[1]->s, ck->p->bck[1]->t, 1);
	sfSprite_setTextureRect(ck->p->bck[1]->s, ck->p->bck[1]->r);
	return (0);
}

int set_text_pause_one(ck_t *ck)
{
	sfVector2f posJ = {1130, 220};
	sfVector2f posO = {1135, 450};
	ck->p->jouer = sfText_create();
	if (!ck->p->jouer)
		return (84);
	sfText_setString(ck->p->jouer, "Resume");
	sfText_setFont(ck->p->jouer, ck->s->font);
	sfText_setColor(ck->p->jouer, sfBlack);
	sfText_setPosition(ck->p->jouer, posJ);
	sfText_setCharacterSize(ck->p->jouer, 120);
	ck->p->options = sfText_create();
	if (!ck->p->options)
		return (84);
	sfText_setString(ck->p->options, "Settings");
	sfText_setFont(ck->p->options, ck->s->font);
	sfText_setColor(ck->p->options, sfBlack);
	sfText_setPosition(ck->p->options, posO);
	sfText_setCharacterSize(ck->p->options, 120);
	return (0);
}

int set_text_pause_two(ck_t *ck)
{
	sfVector2f posQ = {1160, 690};
	ck->p->quitter = sfText_create();
	if (!ck->p->quitter)
		return (84);
	sfText_setString(ck->p->quitter, "Menu");
	sfText_setFont(ck->p->quitter, ck->s->font);
	sfText_setColor(ck->p->quitter, sfBlack);
	sfText_setPosition(ck->p->quitter, posQ);
	sfText_setCharacterSize(ck->p->quitter, 120);
	return (0);
}
