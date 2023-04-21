/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** main
*/

#include <SFML/Graphics.h>
#include <SFML/Window.h>
#include <SFML/System.h>
#include <SFML/Graphics/Color.h>
#include <stdbool.h>
#include "node.h"
#include "vector.h"
#include "direction.h"
#include "pixel_colisition.h"
#include "characters.h"
#include "view.h"
#include "layer.h"
#include "graphique.h"

node_map_t *init_sprite_config(void);
void init_every_struct(view_t *view, animations_t *animations);
node_map_t *init_door_config(void);
void winopen(sfRenderWindow *window ,graph_t graph);

char **pars_the_path(char *str,char *sep);
char *buffer_maker(char *path);
node_map_t *add_node(node_map_t **head, node_map_t **tail, node_map_t **node);

int main(int argc, char **argv)
{
    sfEvent event;
    view_t view;
    sfRenderWindow *window = sfRenderWindow_create((sfVideoMode){1920,
1080, 32}, "SFML Simple Window", sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, FRAME_LIMITE);
    animations_t *animations = malloc(sizeof(animations_t));
    init_every_struct(&view, animations);
    //pixel_colition_t pixel_colision;
    node_map_t *map_node = init_sprite_config();
    node_map_t *door_node = init_door_config();
    direction_t colision = {false,false,false,false};
    direction_t direction = {false,false,false,false};
    layer_t layer = {map_node,door_node,animations->shape,
animations->sprite_characters};
    graph_t graph = {window,event,view,animations,map_node,
door_node,colision,direction,layer};
    winopen(window , graph);
    return 0;
}
