/*
** EPITECH PROJECT, 2022
** nicolas.spijkerman@epitech.eu
** File description:
** singleton.h
*/

#ifndef MY_PAINT_SINGLETON_H
    #define MY_PAINT_SINGLETON_H

    #include <SFML/Graphics.h>

typedef enum state_e {
    HOME
} state_t;

typedef struct font_s {
    sfFont *bold;
    sfFont *medium;
    sfFont *regular;
} font_t;

typedef struct data_s {
    sfRenderWindow *window;
    sfClock *clock;
    sfEvent event;
    state_t state;
    font_t font;
    float dt;
} data_t;

data_t *get_data(void);

#endif // !MY_PAINT_SINGLETON_H
