/*
** EPITECH PROJECT, 2022
** nicolas.spijkerman@epitech.eu
** File description:
** closed.c
*/

#include "singleton.h"

void closed(void)
{
    instance_t *ins = get_instance();

    sfRenderWindow_close(ins->window);
}
