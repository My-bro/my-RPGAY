/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** correction_position
*/

#include <SFML/Graphics.h>
#include "graphique.h"

void get_pixel_colision(node_map_t *map_node, sfVector2f pos_circle);
void check_colision(node_map_t *map_node, direction_t *colision);
int set_sprite(direction_t colision, sfVector2f old_pos_circle,
sfCircleShape *shape);
void set_cam(sfRenderWindow *window, view_t *cam, int flag_cam);


void correct_position(sfRenderWindow *window, graph_t *graph)
{
    get_pixel_colision(graph->map_node,
graph->animations->pos_circle);
    check_colision(graph->map_node, &graph->colision);
    graph->view.flag_cam = set_sprite(graph->colision,
graph->animations->old_pos_circle, graph->animations->shape);
    set_cam(window, &graph->view, graph->view.flag_cam);
}
