/*
** EPITECH PROJECT, 2022
** nicolas.spijkerman@epitech.eu
** File description:
** events_handler.c
*/

#include "singleton.h"
#include "events.h"

static void window_events(sfEventType event)
{
    switch (event) {
        case sfEvtClosed:
            closed();
            break;
        case sfEvtResized:
            resized();
            break;
        case sfEvtLostFocus:
            lost_focus();
            break;
        case sfEvtGainedFocus:
            gained_focus();
            break;
        default:
            break;
    }
}

static void mouse_events(sfEventType event)
{
    switch (event) {
        case sfEvtMouseButtonPressed:
            mouse_button_pressed();
            break;
        case sfEvtMouseButtonReleased:
            mouse_button_released();
            break;
        case sfEvtMouseMoved:
            mouse_moved();
            break;
        case sfEvtMouseEntered:
            mouse_entered();
            break;
        case sfEvtMouseLeft:
            mouse_left();
            break;
        default:
            break;
    }
}

static void keyboard_events(sfEventType event)
{
    switch (event) {
        case sfEvtKeyPressed:
            key_pressed();
            break;
        case sfEvtKeyReleased:
            key_released();
            break;
        case sfEvtTouchBegan:
            touch_began();
            break;
        case sfEvtTouchMoved:
            touch_moved();
            break;
        case sfEvtTouchEnded:
            touch_ended();
            break;
        default:
            break;
    }
}

static void because_we_have_to_respect_the_coding_style(sfEventType event)
{
    switch (event) {
        case sfEvtMouseWheelMoved:
            mouse_wheel_moved();
            break;
        case sfEvtMouseWheelScrolled:
            mouse_wheel_scrolled();
            break;
        case sfEvtTextEntered:
            text_entered();
            break;
        default:
            break;
    }
}

void events_handler(sfEventType event)
{
    window_events(event);
    mouse_events(event);
    keyboard_events(event);
    because_we_have_to_respect_the_coding_style(event);
}
