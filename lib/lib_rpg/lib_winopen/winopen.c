/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** winopen
*/

#include <SFML/Graphics.h>
#include "graphique.h"
#include "characters.h"
#include <stdio.h>


void reset_direction_bool(graph_t *graph);
void check_direction_input(direction_t *direction);
void move_case(sfRenderWindow *window , graph_t *graph);
float recorder(void);
void draw_colision(sfRenderWindow *window, node_map_t *map_node);
void correct_position(sfRenderWindow *window, graph_t *graph);
void draw_every_layer(sfRenderWindow *window, layer_t *layer);
sfVector2f move(sfEvent event, sfRenderWindow *window,
sfCircleShape *circle, sfVector2f pos_cam);

void winopen(sfRenderWindow *window ,graph_t graph)
{
    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        reset_direction_bool(&graph);
        check_event(window, &graph.event, graph.animations, &graph.direction);
        check_direction_input(&graph.direction);
        move_case(window , &graph);
        recorder();
        //printf("[x %f; y %f]\n",graph.animations->pos_circle.x,graph.animations->pos_circle.y);
        draw_colision(window, graph.map_node);
        correct_position(window, &graph);
        draw_every_layer(window, &graph.layer);
        sfRenderWindow_display(window);
    }
}
