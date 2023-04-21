/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** layer
*/

#ifndef LAYER_H_
    #include "node.h"
    #include <SFML/Graphics.h>
    #define LAYER_H_
        typedef struct layer_s {
            node_map_t *map_node;
            node_map_t *door_node;
            sfCircleShape *shape;
            sfSprite *sprite;
    }layer_t;

#endif /* !LAYER_H_ */
