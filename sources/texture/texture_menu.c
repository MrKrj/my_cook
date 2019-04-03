/*
** EPITECH PROJECT, 2018
** My_Cook / Texture
** File description:
** textureM.c
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

int set_bck_menu_and_menu_menu(ck_t *ck)
{
	ck->m->bck[0]->t = sfTexture_createFromFile("ext/bckM.png", NULL);
	if (!ck->m->bck[0]->t)
		return (84);
	ck->m->bck[1]->t = sfTexture_createFromFile("ext/menM.png", NULL);
	if (!ck->m->bck[1]->t)
		return (84);
	ck->m->bck[0]->s = sfSprite_create();
	ck->m->bck[1]->s = sfSprite_create();
	ck->m->bck[1]->r.top = 0;
	ck->m->bck[1]->r.width = 429;
	ck->m->bck[1]->r.height = 688;
	ck->m->bck[1]->r.left = 0;
	ck->m->bck[1]->p.x = 1450;
	ck->m->bck[1]->p.y = 200;
	sfSprite_setTexture(ck->m->bck[0]->s, ck->m->bck[0]->t, 1);
	sfSprite_setPosition(ck->m->bck[1]->s, ck->m->bck[1]->p);
	sfSprite_setTexture(ck->m->bck[1]->s, ck->m->bck[1]->t, 1);
	sfSprite_setTextureRect(ck->m->bck[1]->s, ck->m->bck[1]->r);
	return (0);
}

int set_logo_menu(ck_t *ck)
{
	ck->m->bck[2]->t = sfTexture_createFromFile("ext/logo.png", NULL);
	if (!ck->m->bck[2]->t)
		return (84);
	ck->m->bck[2]->s = sfSprite_create();
	ck->m->bck[2]->p.x = 30;
	ck->m->bck[2]->p.y = 30;
	sfSprite_setPosition(ck->m->bck[2]->s, ck->m->bck[2]->p);
	sfSprite_setTexture(ck->m->bck[2]->s, ck->m->bck[2]->t, 1);
	ck->m->bck[1]->t = sfTexture_createFromFile("ext/bckM3.png", NULL);
	return (0);
}

int set_pllx_menu_one(ck_t *ck)
{
	ck->m->pllx[0]->t = sfTexture_createFromFile("ext/bckM2.png", NULL);
	if (!ck->m->pllx[0]->t)
		return (84);
	ck->m->pllx[0]->s = sfSprite_create();
	ck->m->pllx[0]->p.x = 0;
	ck->m->pllx[0]->p.y = 0;
	sfSprite_setPosition(ck->m->pllx[0]->s, ck->m->pllx[0]->p);
	sfSprite_setTexture(ck->m->pllx[0]->s, ck->m->pllx[0]->t, 1);
	ck->m->pllx[1]->t = sfTexture_createFromFile("ext/bckM3.png", NULL);
	if (!ck->m->pllx[1]->t)
		return (84);
	ck->m->pllx[1]->s = sfSprite_create();
	ck->m->pllx[1]->p.x = 0;
	ck->m->pllx[1]->p.y = 0;
	sfSprite_setPosition(ck->m->pllx[1]->s, ck->m->pllx[1]->p);
	sfSprite_setTexture(ck->m->pllx[1]->s, ck->m->pllx[1]->t, 1);
	return (0);
}

int set_pllx_menu_two(ck_t *ck)
{
	ck->m->pllx[2]->t = sfTexture_createFromFile("ext/bckM4.png", NULL);
	if (!ck->m->pllx[2]->t)
		return (84);
	ck->m->pllx[2]->s = sfSprite_create();
	ck->m->pllx[2]->p.x = 0;
	ck->m->pllx[2]->p.y = 0;
	sfSprite_setPosition(ck->m->pllx[2]->s, ck->m->pllx[2]->p);
	sfSprite_setTexture(ck->m->pllx[2]->s, ck->m->pllx[2]->t, 1);
	ck->m->pllx[3]->t = sfTexture_createFromFile("ext/bckM5.png", NULL);
	if (!ck->m->pllx[3]->t)
		return (84);
	ck->m->pllx[3]->s = sfSprite_create();
	ck->m->pllx[3]->p.x = 0;
	ck->m->pllx[3]->p.y = 0;
	sfSprite_setPosition(ck->m->pllx[3]->s, ck->m->pllx[3]->p);
	sfSprite_setTexture(ck->m->pllx[3]->s, ck->m->pllx[3]->t, 1);
	return (0);
}


int set_pllx_menu_three(ck_t *ck)
{
	ck->m->pllx[4]->t = sfTexture_createFromFile("ext/bckM6.png", NULL);
	if (!ck->m->pllx[4]->t)
		return (84);
	ck->m->pllx[4]->s = sfSprite_create();
	ck->m->pllx[4]->p.x = 0;
	ck->m->pllx[4]->p.y = 0;
	sfSprite_setPosition(ck->m->pllx[4]->s, ck->m->pllx[4]->p);
	sfSprite_setTexture(ck->m->pllx[4]->s, ck->m->pllx[4]->t, 1);
	ck->m->pllx[5]->t = sfTexture_createFromFile("ext/bckM7.png", NULL);
	if (!ck->m->pllx[5]->t)
		return (84);
	ck->m->pllx[5]->s = sfSprite_create();
	ck->m->pllx[5]->p.x = 0;
	ck->m->pllx[5]->p.y = 0;
	sfSprite_setPosition(ck->m->pllx[5]->s, ck->m->pllx[5]->p);
	sfSprite_setTexture(ck->m->pllx[5]->s, ck->m->pllx[5]->t, 1);
	return (0);
}
