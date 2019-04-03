/*
** EPITECH PROJECT, 2018
** My_Cook / Texture
** File description:
** textureO.c
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

int set_bck_option_and_menu_option(ck_t *ck)
{
	sfVector2f scale = {0.7, 0.7};
	ck->o->bck[0]->t = sfTexture_createFromFile("ext/bckO.png", NULL);
	ck->o->bck[1]->t = sfTexture_createFromFile("ext/mute.png", NULL);
	if (!ck->o->bck[0]->t || !ck->o->bck[0]->t)
		return (84);
	ck->o->bck[0]->s = sfSprite_create();
	ck->o->bck[1]->s = sfSprite_create();
	ck->o->bck[1]->p.x = 210;
	ck->o->bck[1]->p.y = 150;
	sfSprite_setTexture(ck->o->bck[0]->s, ck->o->bck[0]->t, 1);
	sfSprite_setScale(ck->o->bck[1]->s, scale);
	sfSprite_setPosition(ck->o->bck[1]->s, ck->o->bck[1]->p);
	sfSprite_setTexture(ck->o->bck[1]->s, ck->o->bck[1]->t, 1);
	return (0);
}

int set_sound_option(ck_t *ck)
{
	ck->o->sound[0]->t = sfTexture_createFromFile("ext/sound.png", NULL);
	ck->o->sound[1]->t = sfTexture_createFromFile("ext/sounds.png", NULL);
	if (!ck->o->sound[0]->t || !ck->o->sound[1]->t)
		return (84);
	ck->o->sound[0]->s = sfSprite_create();
	ck->o->sound[1]->s = sfSprite_create();
	ck->o->sound[0]->r.top = 0;
	ck->o->sound[0]->r.width = 1270;
	ck->o->sound[0]->r.height = 249;
	ck->o->sound[0]->r.left = 0;
	ck->o->sound[0]->p.x = 122;
	ck->o->sound[0]->p.y = 58;
	ck->o->sound[1]->p.x = 1125;
	ck->o->sound[1]->p.y = 58;
	sfSprite_setPosition(ck->o->sound[0]->s, ck->o->sound[0]->p);
	sfSprite_setTexture(ck->o->sound[0]->s, ck->o->sound[0]->t, 1);
	sfSprite_setTextureRect(ck->o->sound[0]->s, ck->o->sound[0]->r);
	sfSprite_setPosition(ck->o->sound[1]->s, ck->o->sound[1]->p);
	sfSprite_setTexture(ck->o->sound[1]->s, ck->o->sound[1]->t, 1);
	return (0);
}

int set_text_option(ck_t *ck)
{
	sfVector2f volume = {470, 130};
	sfVector2f gold_player_one = {260, 605};
	sfVector2f gold_player_two = {260, 755};
	for (int i = 0; i < 6; i++) {
		ck->o->text[i] = sfText_create();
		if (!ck->o->text[i])
			return (84);
		sfText_setFont(ck->o->text[i], ck->s->font);
		sfText_setColor(ck->o->text[i], sfBlack);
		sfText_setCharacterSize(ck->o->text[i], 80);
	}
	sfText_setString(ck->o->text[0], "25%                      50%         "
	"            75%                    100%");
	sfText_setString(ck->o->text[1], "Player 1 : + 10k");
	sfText_setString(ck->o->text[2], "Player 2 : + 10k");
	sfText_setPosition(ck->o->text[0], volume);
	sfText_setPosition(ck->o->text[1], gold_player_one);
	sfText_setPosition(ck->o->text[2], gold_player_two);
	set_text_option_two(ck);
	return (0);
}

void set_text_option_two(ck_t *ck)
{
	sfVector2f up_player_one = {915, 605};
	sfVector2f up_player_two = {915, 755};
	sfVector2f resume = {1520, 270};
	sfText_setString(ck->o->text[3], "Player 1 : Next lvl.");
	sfText_setString(ck->o->text[4], "Player 2 : Next lvl.");
	sfText_setString(ck->o->text[5], "Resume");
	sfText_setCharacterSize(ck->o->text[5], 130);
	sfText_setPosition(ck->o->text[3], up_player_one);
	sfText_setPosition(ck->o->text[4], up_player_two);
	sfText_setPosition(ck->o->text[5], resume);
}

int set_return(ck_t *ck)
{
	ck->o->button[0]->t = sfTexture_createFromFile("ext/return.png", NULL);
	if (!ck->o->button[0]->t)
		return (84);
	ck->o->button[0]->s = sfSprite_create();
	ck->o->button[0]->r.top = 0;
	ck->o->button[0]->r.width = 456;
	ck->o->button[0]->r.height = 215;
	ck->o->button[0]->r.left = 0;
	ck->o->button[0]->p.x = 1439;
	ck->o->button[0]->p.y = 266;
	sfSprite_setPosition(ck->o->button[0]->s, ck->o->button[0]->p);
	sfSprite_setTexture(ck->o->button[0]->s, ck->o->button[0]->t, 1);
	sfSprite_setTextureRect(ck->o->button[0]->s, ck->o->button[0]->r);
	if (set_cheat(ck) == 84)
		return (84);
	return (0);
}
