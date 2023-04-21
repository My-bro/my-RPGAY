/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** teleport_door_cam
*/

#include <SFML/Graphics.h>
#include "node.h"

sfVector2f teleport_door_cam(sfRenderWindow *window, node_map_t *door_node,
sfVector2f pos_circ ,int index)
{
    int i = 0;
    if (index == -1) {
        return pos_circ;
    }
    while (i < index) {
        door_node = door_node->next;
        i += 1;
    }
    pos_circ = (sfVector2f){door_node->vector_2.x - 200,
door_node->vector_2.y - 100};
    return pos_circ;
}
