/*
** EPITECH PROJECT, 2022
** nicolas.spijkerman@epitech.eu
** File description:
** events.h
*/

#ifndef MY_PAINT_EVENTS_H
    #define MY_PAINT_EVENTS_H

void closed(void);
void resized(void);
void lost_focus(void);
void gained_focus(void);
void text_entered(void);
void key_pressed(void);
void key_released(void);
void mouse_wheel_moved(void);
void mouse_wheel_scrolled(void);
void mouse_button_pressed(void);
void mouse_button_released(void);
void mouse_moved(void);
void mouse_entered(void);
void mouse_left(void);
void joystick_button_pressed(void);
void joystick_button_released(void);
void joystick_moved(void);
void joystick_connected(void);
void joystick_disconnected(void);
void touch_began(void);
void touch_moved(void);
void touch_ended(void);
void sensor_changed(void);
void count(void);

#endif // !MY_PAINT_EVENTS_H
