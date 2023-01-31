/*
** EPITECH PROJECT, 2022
** nicolas.spijkerman@epitech.eu
** File description:
** reference_frame.c
*/

#include "reference_frame.h"

void set_position_relative_to(ref_rect_t reference, ref_rect_t pos)
{
    pos.abs_rect.left = reference.abs_rect.left + pos.ref_rect.left;
    pos.abs_rect.top = reference.abs_rect.top + pos.ref_rect.top;
}
