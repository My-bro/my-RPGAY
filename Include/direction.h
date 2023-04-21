/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** colision
*/

#include <stdbool.h>

#ifndef DIRECTION_H_
    #define DIRECTION_H_
        #include <stdarg.h>
        #include <SFML/Graphics.h>
        typedef struct direction_s {
            bool Left;
            bool Right;
            bool Up;
            bool Down;
        } direction_t;
        #define velocity 3
        #define lim_cam_x 1000500
        #define lim_cam_y 1000660
        #define lim_sprite_x 99900
        #define lim_sprite_y 991000
#endif /* !COLISION_H_ */
