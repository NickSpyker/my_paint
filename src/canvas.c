/*
** EPITECH PROJECT, 2022
** nicolas.spijkerman@epitech.eu
** File description:
** canvas.c
*/

#include "canvas.h"

canvas_t create_canvas(sfVector2f pos, sfVector2u size, unsigned int z_index)
{
    canvas_t result;

    result.ref_rect = (ref_rect_t){z_index,
        (sfFloatRect){
            pos.x,
            pos.y,
            (float)size.x,
            (float)size.y
        },
        (sfFloatRect){
            pos.x,
            pos.y,
            (float)size.x,
            (float)size.y
        }
    };
    result.texture = sfTexture_create(size.x, size.y);
    sfTexture_setRepeated(result.texture, sfTrue);
    result.sprite = sfSprite_create();
    sfSprite_setTexture(result.sprite, result.texture, sfTrue);
    return result;
}

void canvas_destroy(canvas_t *canvas)
{
    sfTexture_destroy(canvas->texture);
    sfSprite_destroy(canvas->sprite);
}
