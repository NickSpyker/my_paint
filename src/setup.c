/*
** EPITECH PROJECT, 2022
** nicolas.spijkerman@epitech.eu
** File description:
** setup.c
*/

#include <singleton.h>

void setup(void)
{
    instance_t *ins = get_instance();
    sfVideoMode mode = {1536, 864, 32};

    ins->window = sfRenderWindow_create(mode, "My Paint", sfClose | sfResize, NULL);
    ins->clock =  sfClock_create();
}
