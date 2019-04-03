/*
** EPITECH PROJECT, 2018
** My_Cook / Basics
** File description:
** main.c
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

int set_music(ck_t *ck, char *sources)
{
	ck->wdw->music = sfMusic_createFromFile(sources);
	if (!ck->wdw->music)
		return (84);
	sfMusic_setLoop(ck->wdw->music, 1);
	sfMusic_setVolume(ck->wdw->music, ck->wdw->volume);
	sfMusic_play(ck->wdw->music);
	return (0);
}

int initialisation(ck_t *ck)
{
	ck->wdw = malloc(sizeof(wdw_t));
	ck->wdw->volume = 100;
	ck->wdw->mode.width = 1920;
	ck->wdw->mode.height = 1080;
	ck->wdw->mode.bitsPerPixel = 32;
	ck->wdw->name = "Age of Kerdot";
	ck->wdw->wdw = sfRenderWindow_create(ck->wdw->mode, ck->wdw->name,
		sfFullscreen, NULL);
	if (!ck->wdw->wdw)
		return (84);
	sfRenderWindow_setVerticalSyncEnabled(ck->wdw->wdw, sfTrue);
	ck->wdw->clock = sfClock_create();
	ck->wdw->elapsed = 0;
	ck->scene = 0;
	set_stats(ck);
	return (0);
}

void displayh(void)
{
	write(1, "MY_COOK : Age of Kerdot\n", 24);
	write(1, "\n", 1);
	write(1, "AoK est un jeu 'Age of War' like qui se joue à deux.\n", 53);
	write(1, "L'un jouera avec 'QZSd A et l'autre 'OKLM P'.\n", 46);
	write(1, "Le but dut jeu est d'envoyer des unités sur le camp", 51);
	write(1, "ennemi afin de détruire sa forteresse\n", 38);
	write(1, "Pour parvenir à vos fins, pensez à évoluer vos ", 47);
	write(1, "forteresses et à la réparer !\n", 30);
	write(1, "\nBon jeu !\n", 11);
}

int check_error(int ac, char **av, char **envp, ck_t *ck)
{
	if (envp[0] == NULL)
		return (84);
	if (ac > 1) {
		if (ac == 2 && av[1][0] == '-' && av[1][1] == 'h') {
			displayh();
			return (0);
		} else if (my_strcmp(av[1], "-cheat") == 0) {
			ck->cheat = 1;
		} else {
			write(2, "Too few arguments.\n", 19);
			return (84);
		}
	}
	return (1);
}

int main(int ac, char **av, char **envp)
{
	int cerror = 0;
	ck_t *ck = malloc(sizeof(ck_t));
	ck->cheat = 0;
	cerror = check_error(ac, av, envp, ck);
	if (cerror != 1)
		return (cerror);
	if (initialisation(ck) == 84)
		return (84);
	if (start(ck) == 84)
		return (84);
	free(ck);
	return (0);
}
