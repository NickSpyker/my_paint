/*
** EPITECH PROJECT, 2022
** nicolas.spijkerman@epitech.eu
** File description:
** events_handler.c
*/

#include "singleton.h"

void window_events(sfEventType event)
{
    data_t *data = get_data();

    switch (event) {
        case sfEvtClosed:
            sfRenderWindow_close(data->window);
        case sfEvtResized:
        case sfEvtLostFocus:
        case sfEvtGainedFocus:
        default:
            break;
    }
}

void mouse_events(sfEventType event)
{
    switch (event) {
        case sfEvtMouseWheelMoved:
        case sfEvtMouseWheelScrolled:
        case sfEvtMouseButtonPressed:
        case sfEvtMouseButtonReleased:
        case sfEvtMouseMoved:
        case sfEvtMouseEntered:
        case sfEvtMouseLeft:
        default:
            break;
    }
}

void joystick_events(sfEventType event)
{
    switch (event) {
        case sfEvtJoystickButtonPressed:
        case sfEvtJoystickButtonReleased:
        case sfEvtJoystickMoved:
        case sfEvtJoystickConnected:
        case sfEvtJoystickDisconnected:
        default:
            break;
    }
}

void other_events(sfEventType event)
{
    switch (event) {
        case sfEvtTextEntered:
        case sfEvtKeyPressed:
        case sfEvtKeyReleased:
        case sfEvtTouchBegan:
        case sfEvtTouchMoved:
        case sfEvtTouchEnded:
        case sfEvtSensorChanged:
        case sfEvtCount:
        default:
            break;
    }
}

void events_handler(sfEventType event)
{
    window_events(event);
    mouse_events(event);
    joystick_events(event);
    other_events(event);
}
