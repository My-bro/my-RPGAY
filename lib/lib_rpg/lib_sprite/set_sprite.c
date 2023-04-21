/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** move_sprite
*/

#include <SFML/Graphics.h>
#include "direction.h"

int set_sprite(direction_t colision, sfVector2f old_pos_circle,
sfCircleShape *shape)
{
    if (colision.Left == true || colision.Right == true ||
colision.Up == true || colision.Down == true) {
        sfCircleShape_setPosition(shape, old_pos_circle);
        return 1;
    }
    return 0;
}
