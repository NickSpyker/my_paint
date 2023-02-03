/*
** EPITECH PROJECT, 2022
** nicolas.spijkerman@epitech.eu
** File description:
** teardown.c
*/

#include "singleton.h"

void teardown(void)
{
    instance_t *ins = get_instance();

    sfRenderWindow_destroy(ins->window);
    destroy_instance();
}
