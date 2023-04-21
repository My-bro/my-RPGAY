/*
** EPITECH PROJECT, 2022
** chained list struct
** File description:
** make the struct
*/

#include <SFML/Graphics.h>
#include "vector.h"
#include "pixel_colisition.h"


#ifndef NODE_STRUCT
    #define NODE_STRUCT
        #include <stdarg.h>
        typedef struct node_map_s {
            char *name;
            char *type;
            char *path;
            sfSprite *sprite;
            sfCircleShape *door;
            sfVector2f vector;
            sfVector2f vector_2;
            sfVector2f vector_3;
            sfImage *image;
            sfTexture *texture;
            pixel_colition_t pixel_colision;
            struct node_map_s *next;
        } node_map_t;
#endif
