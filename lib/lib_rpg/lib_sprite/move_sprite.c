/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** move_sprite_mali
*/

#include <SFML/Graphics.h>
#include <stdbool.h>
#include "direction.h"

void move_sprite(sfRenderWindow *window, direction_t *colision,
sfCircleShape *circle)
{
    sfVector2f current_position = sfCircleShape_getPosition(circle);
    int add_x = 0;
    int add_y = 0;
    if (colision->Up == true) {
        add_y -= velocity;
    }
    if (colision->Down == true) {
        add_y += velocity;
    }
    if (colision->Left == true) {
        add_x -= velocity;
    }
    if (colision->Right == true) {
        add_x += velocity;
    }
    sfCircleShape_setPosition(circle, (sfVector2f){current_position.x + add_x,
current_position.y + add_y});
}
