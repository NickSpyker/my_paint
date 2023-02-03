/*
** EPITECH PROJECT, 2022
** nicolas.spijkerman@epitech.eu
** File description:
** main.c
*/

#include "singleton.h"

void setup(void);
void teardown(void);
void events_handler(sfEventType event);

int main(void)
{
    instance_t *ins = get_instance();

    setup();
    while (sfRenderWindow_isOpen(ins->window)) {
        if (sfRenderWindow_pollEvent(ins->window, &ins->event)) {
            events_handler(ins->event.type);
        }
    }
    teardown();
    return 0;
}
