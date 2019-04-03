/*
** EPITECH PROJECT, 2018
** My_Cook / Event
** File description:
** eventO.c
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

void react_to_mouse_sound(ck_t *ck)
{
	if ((ck->mouse_pos.x > 122 && ck->mouse_pos.x < 373) &&
	(ck->mouse_pos.y > 58 && ck->mouse_pos.y < 307)) {
		ck->o->sound[0]->r.top = 249;
		sfSprite_setTextureRect(ck->o->sound[0]->s, ck->o->sound[0]->r);
	} else if ((ck->mouse_pos.x > 373 && ck->mouse_pos.x < 624) &&
	(ck->mouse_pos.y > 58 && ck->mouse_pos.y < 307)) {
		ck->o->sound[0]->r.top = 498;
		sfSprite_setTextureRect(ck->o->sound[0]->s, ck->o->sound[0]->r);
	} else
		react_to_mouse_sound_2(ck);
}

void react_to_mouse_sound_2(ck_t *ck)
{
	if ((ck->mouse_pos.x > 624 && ck->mouse_pos.x < 875) &&
	(ck->mouse_pos.y > 58 && ck->mouse_pos.y < 307)) {
		ck->o->sound[0]->r.top = 747;
		sfSprite_setTextureRect(ck->o->sound[0]->s, ck->o->sound[0]->r);
	} else if ((ck->mouse_pos.x > 875 && ck->mouse_pos.x < 1126) &&
	(ck->mouse_pos.y > 58 && ck->mouse_pos.y < 307)) {
		ck->o->sound[0]->r.top = 996;
		sfSprite_setTextureRect(ck->o->sound[0]->s, ck->o->sound[0]->r);
	} else
		react_to_mouse_sound_3(ck);
}

void react_to_mouse_sound_3(ck_t *ck)
{
	if ((ck->mouse_pos.x > 1126 && ck->mouse_pos.x < 1377) &&
	(ck->mouse_pos.y > 58 && ck->mouse_pos.y < 307)) {
		ck->o->sound[0]->r.top = 1245;
		sfSprite_setTextureRect(ck->o->sound[0]->s, ck->o->sound[0]->r);
	} else {
		ck->o->sound[0]->r.top = 0;
		sfSprite_setTextureRect(ck->o->sound[0]->s, ck->o->sound[0]->r);
	}
}

void react_to_mouse_return(ck_t *ck)
{
	if ((ck->mouse_pos.x > 1439 && ck->mouse_pos.x < 1895) &&
	(ck->mouse_pos.y > 266 && ck->mouse_pos.y < 481)) {
		ck->o->button[0]->r.top = 216;
		sfSprite_setTextureRect(ck->o->button[0]->s,
		ck->o->button[0]->r);
	} else {
		ck->o->button[0]->r.top = 0;
		sfSprite_setTextureRect(ck->o->button[0]->s,
			ck->o->button[0]->r);
	}
	if ((ck->mouse_pos.x > 1439 && ck->mouse_pos.x < 1895) &&
	(ck->mouse_pos.y > 266 && ck->mouse_pos.y < 481) &&
	ck->mouse_pressed == 1) {
		ck->scene = ck->last_scene;
	}
}
