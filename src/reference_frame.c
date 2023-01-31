/*
** EPITECH PROJECT, 2022
** nicolas.spijkerman@epitech.eu
** File description:
** reference_frame.c
*/

#include "reference_frame.h"

sfVector2f position_relative_to(sfVector2f reference, sfVector2f pos)
{
    sfVector2f result;

    result.x = reference.x + pos.x;
    result.y = reference.y + pos.y;
    return result;
}

sfVector2f reference_position(sfVector2f reference, sfVector2f pos)
{
    sfVector2f result;

    result.x = reference.x - pos.x;
    result.y = reference.y - pos.y;
    return result;
}
