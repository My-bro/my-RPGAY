/*
** EPITECH PROJECT, 2022
** chained list struct
** File description:
** make the struct
*/



#ifndef LINK_STRUCT
    #define LINK_STRUCT
        #include <stdarg.h>
        #include <SFML/Graphics.h>
        typedef struct node_door_s {
            sfSprite *sprite_portal_a;
            struct node_door_s *next;
        } node_info_t;
#endif
