/*
** EPITECH PROJECT, 2022
** nicolas.spijkerman@epitech.eu
** File description:
** reference_frame.h
*/

#ifndef MY_PAINT_REFERENCE_FRAME_H
    #define MY_PAINT_REFERENCE_FRAME_H

    #include <SFML/Graphics.h>

typedef struct ref_rect_s {
    unsigned int z_index;
    sfFloatRect ref_rect;
    sfFloatRect abs_rect;
} ref_rect_t;

void set_position_relative_to(ref_rect_t reference, ref_rect_t pos);

#endif // !MY_PAINT_REFERENCE_FRAME_H
