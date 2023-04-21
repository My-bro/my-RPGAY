/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** teleport_door_sprite
*/

#include <SFML/Graphics.h>
#include "node.h"

void teleport_door_sprite(sfRenderWindow *window, node_map_t *door_node,
sfCircleShape *shape ,int index)
{
    int i = 0;
    if (index == -1) {
        return;
    }
    while (i < index) {
        door_node = door_node->next;
        i += 1;
    }
    sfCircleShape_setPosition(shape,door_node->vector_2);
}
