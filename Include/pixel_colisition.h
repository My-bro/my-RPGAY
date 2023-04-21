/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** pixel_colisition
*/
#include <SFML/Graphics.h>
#ifndef PIXEL_COLISITION_H_
    #define PIXEL_COLISITION_H_
        typedef struct pixel_colition_s {
            sfColor Color_left;
            sfColor Color_right;
            sfColor Color_down;
            sfColor Color_up;
        } pixel_colition_t;
#endif /* !PIXEL_COLISITION_H_ */
