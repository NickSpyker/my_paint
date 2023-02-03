/*
** EPITECH PROJECT, 2022
** nicolas.spijkerman@epitech.eu
** File description:
** singleton.h
*/

#ifndef MY_PAINT_SINGLETON_H
    #define MY_PAINT_SINGLETON_H

    #include <SFML/Graphics.h>

typedef struct colors_s {
    sfColor bg;
    sfColor txt;
} colors_t;

typedef struct instance_s {
    sfRenderWindow *window;
    sfEvent event;
    sfClock *clock;
    float dt;
    sfRenderTexture *frame_buffer;
    colors_t *colors;
} instance_t;

instance_t *get_instance(void);
void destroy_instance(void);

#endif // !MY_PAINT_SINGLETON_H
