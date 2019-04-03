/*
** EPITECH PROJECT, 2018
** My_Cook / Basics
** File description:
** commands.c
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
#include <math.h>
#include "../../include/struct.h"
#include "../../include/cook.h"

int my_strcmp(char *s1, char *s2)
{
	char res = 0;
	for (int i = 0; (s1[i] != '\0' || s2[i] != '\0'); i++) {
		res = s1[i] - s2[i];
		if (res > 0)
			return res;
		if (res < 0)
			return res;
	}
	return res;
}

int my_strlen_int(int nb)
{
	int i;
	int count;

	for (i = 10, count = 0; ; i *= 10, count++) {
		if (nb / i == 0)
			break;
	}
	return count + 1;
}

char *my_itoa(int nb)
{
	int nb_size = my_strlen_int(nb);
	int prev = 0;
	int i;
	int j;
	char *str;

	str = malloc(sizeof(char) * (nb_size + 1));
	for (i = 0, j = pow(10, nb_size - 1); i < nb_size; i++, j /= 10) {
		str[i] = (nb / j - (prev * 10)) + 48;
		prev = nb / j;
	}
	str[i] = '\0';
	return (str);
}
