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
    char title[] = "#CODE - Courbe de Bezier";
    sfUint32 style = sfClose | sfResize;

    ins->window = sfRenderWindow_create(mode, title, style, NULL);
    ins->frame_buffer = NULL;
    ins->colors->bg = sfColor_fromRGBA(40, 44, 52, 20);
    ins->colors->txt = sfColor_fromRGBA(171, 178, 191, 75);
    ins->clock = sfClock_create();
}
