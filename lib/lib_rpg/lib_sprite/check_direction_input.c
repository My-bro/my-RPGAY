/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** check_direction_input
*/

#include <SFML/Graphics.h>
#include "pixel_colisition.h"
#include "direction.h"
#include <stdbool.h>

void check_direction_input(direction_t *direction)
{
    if (sfKeyboard_isKeyPressed(sfKeyUp)) {
        direction->Up = true;
    }
    if (sfKeyboard_isKeyPressed(sfKeyDown)) {
        direction->Down = true;
    }
    if (sfKeyboard_isKeyPressed(sfKeyLeft)) {
        direction->Left = true;
    }
    if (sfKeyboard_isKeyPressed(sfKeyRight)) {
        direction->Right = true;
    }
}
