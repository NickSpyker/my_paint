/*
** EPITECH PROJECT, 2022
** nicolas.spijkerman@epitech.eu
** File description:
** main.c
*/

#include "singleton.h"

void setup(void);
void teardown(void);
void update_delta_time(void);
void events_handler(sfEventType event);

int main(void)
{
    data_t *data = get_data();

    setup();
    while (sfRenderWindow_isOpen(data->window)) {
        update_delta_time();
        sfRenderWindow_clear(data->window, sfBlack);
        while (sfRenderWindow_pollEvent(data->window, &data->event)) {
            events_handler(data->event.type);
        }
        sfRenderWindow_display(data->window);
    }
    teardown();
    return 0;
}
