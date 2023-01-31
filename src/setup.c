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
    char *font_path[] = {
        "./asset/font/FiraMono-Bold.ttf",
        "./asset/font/FiraMono-Medium.ttf",
        "./asset/font/FiraMono-Regular.ttf"
    };

    data->window = sfRenderWindow_create(mode, "My Paint", style, NULL);
    sfRenderWindow_setFramerateLimit(data->window, 120);
    data->clock = sfClock_create();
    data->state = HOME;
    data->font.bold = sfFont_createFromFile(font_path[0]);
    data->font.medium = sfFont_createFromFile(font_path[1]);
    data->font.regular = sfFont_createFromFile(font_path[2]);
}
