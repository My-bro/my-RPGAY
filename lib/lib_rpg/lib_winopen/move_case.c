/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** move_case
*/

#include <SFML/Graphics.h>
#include "graphique.h"

int check_door_case(node_map_t *door_node, sfVector2f circ_pos);
void move_sprite(sfRenderWindow *window, direction_t *colision,
sfCircleShape *circle);
void move_view(sfRenderWindow *window, direction_t *colision,
sfCircleShape *circle, sfVector2f *pos_cam);
void teleport_door_sprite(sfRenderWindow *window, node_map_t *door_node,
sfCircleShape *shape ,int index);
sfVector2f teleport_door_cam(sfRenderWindow *window, node_map_t *door_node,
sfVector2f pos_circ ,int index);

void move_case(sfRenderWindow *window , graph_t *graph)
{
    int index = check_door_case(graph->door_node,
graph->animations->old_pos_circle);
    teleport_door_sprite(window, graph->door_node,
graph->animations->shape ,index);
    if (index != -1) {
        graph->view.pos_cam = teleport_door_cam(window, graph->door_node,
graph->animations->pos_circle ,index);
        graph->view.moved_cam = graph->view.pos_cam;
    }
    graph->animations->old_pos_circle =
sfCircleShape_getPosition(graph->animations->shape);
    move_sprite(window, &graph->direction, graph->animations->shape);
    move_view(window, &graph->direction, graph->animations->shape,
&graph->view.moved_cam);
    graph->animations->pos_circle =
sfCircleShape_getPosition(graph->animations->shape);
    sfSprite_setPosition(graph->animations->sprite_characters,
(sfVector2f){graph->animations->pos_circle.x,
graph->animations->pos_circle.y - 10});
}
