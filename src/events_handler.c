/*
** EPITECH PROJECT, 2022
** nicolas.spijkerman@epitech.eu
** File description:
** events_handler.c
*/

#include "singleton.h"
#include "events.h"

void events_handler(sfEventType event)
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
        case sfEvtTextEntered:
            text_entered();
            break;
        case sfEvtKeyPressed:
            key_pressed();
            break;
        case sfEvtKeyReleased:
            key_released();
            break;
        case sfEvtMouseWheelMoved:
            mouse_wheel_moved();
            break;
        case sfEvtMouseWheelScrolled:
            mouse_wheel_scrolled();
            break;
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
        case sfEvtJoystickButtonPressed:
            joystick_button_pressed();
            break;
        case sfEvtJoystickButtonReleased:
            joystick_button_released();
            break;
        case sfEvtJoystickMoved:
            joystick_moved();
            break;
        case sfEvtJoystickConnected:
            joystick_connected();
            break;
        case sfEvtJoystickDisconnected:
            joystick_disconnected();
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
        case sfEvtSensorChanged:
            sensor_changed();
            break;
        case sfEvtCount:
            count();
            break;
    }
}
