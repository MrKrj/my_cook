/*
** EPITECH PROJECT, 2018
** My_Cook / Texture
** File description:
** textureMtext.c
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

int set_text_menu_one(ck_t *ck)
{
	sfVector2f posJ = {1570, 220};
	sfVector2f posO = {1535, 450};
	ck->m->jouer = sfText_create();
	if (!ck->m->jouer)
		return (84);
	sfText_setString(ck->m->jouer, "Play");
	sfText_setFont(ck->m->jouer, ck->s->font);
	sfText_setColor(ck->m->jouer, sfBlack);
	sfText_setPosition(ck->m->jouer, posJ);
	sfText_setCharacterSize(ck->m->jouer, 120);
	ck->m->options = sfText_create();
	if (!ck->m->options)
		return (84);
	sfText_setString(ck->m->options, "Settings");
	sfText_setFont(ck->m->options, ck->s->font);
	sfText_setColor(ck->m->options, sfBlack);
	sfText_setPosition(ck->m->options, posO);
	sfText_setCharacterSize(ck->m->options, 120);
	return (0);
}

int set_text_menu_two(ck_t *ck)
{
	sfVector2f posQ = {1490, 690};
	ck->m->quitter = sfText_create();
	if (!ck->m->quitter)
		return (84);
	sfText_setString(ck->m->quitter, "Quit game");
	sfText_setFont(ck->m->quitter, ck->s->font);
	sfText_setColor(ck->m->quitter, sfBlack);
	sfText_setPosition(ck->m->quitter, posQ);
	sfText_setCharacterSize(ck->m->quitter, 120);
	return (0);
}
