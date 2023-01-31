/*
** EPITECH PROJECT, 2022
** nicolas.spijkerman@epitech.eu
** File description:
** canvas.h
*/

#ifndef MY_PAINT_CANVA_H
    #define MY_PAINT_CANVA_H

#include "reference_frame.h"

typedef struct canvas_s {
    ref_rect_t ref_rect;
    sfTexture *texture;
    sfSprite *sprite;
} canvas_t;

canvas_t create_canvas(sfVector2f pos, sfVector2u size, unsigned int z_index);
void canvas_destroy(canvas_t *canvas);

#endif // !MY_PAINT_CANVA_H
