/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** check_door_case
*/

#include <SFML/Graphics.h>
#include <math.h>
#include "node.h"

int check_door_case(node_map_t *door_node, sfVector2f circ_pos)
{
    int i = 0;
    while (door_node != NULL) {
        float dx = (circ_pos.x) - (door_node->vector.x);
        float dy = (circ_pos.y) - (door_node->vector.y);
        float distance = sqrt(dx * dx + dy * dy);
        if (distance < 10) {
            return i;
        }
        door_node = door_node->next;
        i += 1;
    }
    return -1;
}
