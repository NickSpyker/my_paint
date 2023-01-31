/*
** EPITECH PROJECT, 2022
** nicolas.spijkerman@epitech.eu
** File description:
** reference_frame.h
*/

#ifndef MY_PAINT_REFERENCE_FRAME_H
    #define MY_PAINT_REFERENCE_FRAME_H

    #include <SFML/Graphics.h>

sfVector2f position_relative_to(sfVector2f reference, sfVector2f pos);
sfVector2f reference_position(sfVector2f reference, sfVector2f pos);

#endif // !MY_PAINT_REFERENCE_FRAME_H
