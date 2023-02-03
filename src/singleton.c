/*
** EPITECH PROJECT, 2022
** nicolas.spijkerman@epitech.eu
** File description:
** singleton.c
*/

#include <stdlib.h>
#include "singleton.h"

instance_t *get_instance(void)
{
    static instance_t *instance = NULL;

    if (instance == NULL) {
        instance = malloc(sizeof(instance_t));
        instance->colors = malloc(sizeof(colors_t));
    }
    return instance;
}

void destroy_instance(void)
{
    instance_t *instance = get_instance();

    free(instance->colors);
    free(instance);
}
