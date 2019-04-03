/*
** EPITECH PROJECT, 2018
** My_Cook / Event
** File description:
** eventgentity.c
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

int which_id_g(ck_t *ck)
{
	int i;
	for (i = 0; i < 5; i++) {
		if (ck->g->unitg[i]->state == 0)
			return (i);
	}
	return (-1);
}

int which_id_d(ck_t *ck)
{
	int i;
	for (i = 0; i < 5; i++) {
		if (ck->g->unitd[i]->state == 0)
			return (i);
	}
	return (-1);
}
