/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** draw_config_file
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "node.h"

int my_strcmp(char const *s1, char const *s2);

void draw_colision(sfRenderWindow *window, node_map_t *map_node)
{
    int i = 0;
    while (map_node != NULL) {
        if (my_strcmp(map_node->type,"Colision") == 1) {
            sfRenderWindow_drawSprite(window, map_node->sprite, NULL);
        }
        map_node = map_node->next;
        ++i;
    }
}

void draw_map_base(sfRenderWindow *window, node_map_t *map_node)
{
    int i = 0;
    while (map_node != NULL) {
        if (my_strcmp(map_node->type,"Graphics_Base") == 1) {
            sfRenderWindow_drawSprite(window, map_node->sprite, NULL);
        }
        map_node = map_node->next;
        ++i;
    }
}

void draw_map_layer(sfRenderWindow *window, node_map_t *map_node)
{
    int i = 0;
    while (map_node != NULL) {
        if (my_strcmp(map_node->type,"Graphics_Layer") == 1) {
            sfRenderWindow_drawSprite(window, map_node->sprite, NULL);
        }
        map_node = map_node->next;
        ++i;
    }
}
