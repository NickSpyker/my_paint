/*
** EPITECH PROJECT, 2022
** nicolas.spijkerman@epitech.eu
** File description:
** closed.c
*/

#include "singleton.h"

void closed(void)
{
    data_t *data = get_data();

    sfRenderWindow_close(data->window);
}
