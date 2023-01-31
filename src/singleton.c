/*
** EPITECH PROJECT, 2022
** nicolas.spijkerman@epitech.eu
** File description:
** singleton.c
*/

#include <stdlib.h>
#include "singleton.h"

data_t *get_data(void)
{
    static data_t *singleton = NULL;

    if (singleton == NULL) {
        singleton = malloc(sizeof(data_t));
    }
    return singleton;
}
