/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** draw_every_layer
*/

#include <SFML/Graphics.h>
#include "layer.h"
#include "node.h"

void draw_map_base(sfRenderWindow *window, node_map_t *map_node);
void draw_map_layer(sfRenderWindow *window, node_map_t *map_node);

void  draw_map_door(sfRenderWindow *window, node_map_t *map_node)
{
    int i = 0;
    while (map_node != NULL) {
        sfRenderWindow_drawCircleShape(window, map_node->door, NULL);
        map_node = map_node->next;
        ++i;
    }
}

void draw_every_layer(sfRenderWindow *window, layer_t *layer)
{
    draw_map_base(window, layer->map_node);
    draw_map_door(window, layer->door_node);
    sfRenderWindow_drawCircleShape(window, layer->shape, NULL);
    sfRenderWindow_drawSprite(window, layer->sprite, NULL);
    draw_map_layer(window, layer->map_node);
}
