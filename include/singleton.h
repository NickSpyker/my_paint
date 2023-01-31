/*
** EPITECH PROJECT, 2022
** nicolas.spijkerman@epitech.eu
** File description:
** singleton.h
*/

#ifndef MY_PAINT_SINGLETON_H
    #define MY_PAINT_SINGLETON_H

    #include <SFML/Graphics.h>

typedef struct data_s {
    sfRenderWindow *window;
    sfClock *clock;
    sfEvent event;
    float dt;
} data_t;

data_t *get_data(void);

#endif // !MY_PAINT_SINGLETON_H
