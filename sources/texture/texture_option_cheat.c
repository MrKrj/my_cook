/*
** EPITECH PROJECT, 2018
** My_Cook / Texture
** File description:
** textureOcheat.c
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

int set_cheat(ck_t *ck)
{
	ck->o->button[1]->p.x = 186;
	ck->o->button[1]->p.y = 594;
	ck->o->button[2]->p.x = 186;
	ck->o->button[2]->p.y = 746;
	ck->o->button[3]->p.x = 868;
	ck->o->button[3]->p.y = 746;
	ck->o->button[4]->p.x = 868;
	ck->o->button[4]->p.y = 594;
	if (set_cheat_two(ck) == 84)
		return (84);
	return (0);
}

int set_cheat_two(ck_t *ck)
{
	sfVector2f scale = {1.02, 1.02};
	for (int i = 1; i < 5; i++) {
		ck->o->button[i]->t = sfTexture_createFromFile("ext/cheat.png",
		NULL);
		if (!ck->o->button[i]->t)
			return (84);
		ck->o->button[i]->s = sfSprite_create();
		ck->o->button[i]->r.top = 0;
		ck->o->button[i]->r.width = 457;
		ck->o->button[i]->r.height = 135;
		ck->o->button[i]->r.left = 0;
		sfSprite_setPosition(ck->o->button[i]->s, ck->o->button[i]->p);
		sfSprite_setTexture(ck->o->button[i]->s,
			ck->o->button[i]->t, 1);
		sfSprite_setTextureRect(ck->o->button[i]->s,
			ck->o->button[i]->r);
		sfSprite_setScale(ck->o->button[i]->s, scale);
	}
	return (0);
}
