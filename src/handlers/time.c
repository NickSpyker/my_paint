/*
** EPITECH PROJECT, 2022
** nicolas.spijkerman@epitech.eu
** File description:
** time_handler.c
*/

#include "singleton.h"

void update_delta_time(void)
{
    instance_t *ins = get_instance();

    ins->dt = sfTime_asSeconds(sfClock_restart(ins->clock));
}
