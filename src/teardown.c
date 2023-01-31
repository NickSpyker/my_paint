/*
** EPITECH PROJECT, 2022
** nicolas.spijkerman@epitech.eu
** File description:
** teardown.c
*/

#include <stdlib.h>
#include "singleton.h"

void teardown(void)
{
    data_t *data = get_data();

    sfClock_destroy(data->clock);
    sfRenderWindow_destroy(data->window);
    free(data);
}
