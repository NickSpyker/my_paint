/*
** EPITECH PROJECT, 2022
** nicolas.spijkerman@epitech.eu
** File description:
** time_handler.c
*/

#include "singleton.h"

void update_delta_time(void)
{
    data_t *data = get_data();

    data->dt = sfTime_asSeconds(sfClock_restart(data->clock));
}
