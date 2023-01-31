/*
** EPITECH PROJECT, 2022
** nicolas.spijkerman@epitech.eu
** File description:
** setup.c
*/

#include "singleton.h"

void setup(void)
{
    data_t *data = get_data();
    sfUint32 style = sfResize | sfClose;
    sfVideoMode mode = {1664, 936, 32};

    data->window = sfRenderWindow_create(mode, "My Paint", style, NULL);
    sfRenderWindow_setFramerateLimit(data->window, 120);
    data->clock = sfClock_create();
}
