/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** check_colision
*/

#include <SFML/Graphics.h>
#include "pixel_colisition.h"
#include "direction.h"
#include "node.h"

void check_colision(node_map_t *map_node, direction_t *colision)
{
    while (map_node != NULL) {
        if (map_node->pixel_colision.Color_left.r == 255) {
            colision->Left = true;
        }
        if (map_node->pixel_colision.Color_right.r == 255) {
            colision->Right = true;
        }
        if (map_node->pixel_colision.Color_up.r == 255) {
            colision->Up = true;
        }
        if (map_node->pixel_colision.Color_down.r == 255) {
            colision->Down = true;
        }
        map_node = map_node->next;
    }
}
