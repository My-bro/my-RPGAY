/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** init_door_config
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "node.h"
#include <stdio.h>

char **pars_the_path(char *str,char *sep);
char *buffer_maker(char *path);
node_map_t *add_node(node_map_t **head, node_map_t **tail, node_map_t **node);

static void add_door_values(node_map_t *id_map, char **info_db)
{
    id_map->name = info_db[0];
    id_map->vector = (sfVector2f){atoi(info_db[1]),atoi(info_db[2])};
    id_map->vector_2 = (sfVector2f){atoi(info_db[3]),atoi(info_db[4])};
    id_map->door = sfCircleShape_create();
    sfCircleShape_setFillColor(id_map->door, sfBlue);
    sfCircleShape_setRadius(id_map->door,10.f);
    sfCircleShape_setPosition(id_map->door, id_map->vector);
}

node_map_t *init_door_config(void)
{
    char *config_file_buffer = buffer_maker("./src/config_file/\
config_door.txt");
    char **config_file_db = pars_the_path(config_file_buffer,"\n");
    node_map_t *id_map_head = NULL;
    node_map_t *id_map_tail = NULL;
    node_map_t *id_map = NULL;
    char **info_db = NULL;
    for (int i = 0; config_file_db[i] != NULL; i += 1) {
        char **info_db = pars_the_path(config_file_db[i]," []\n");
        id_map = malloc(sizeof(node_map_t));
        add_door_values(id_map, info_db);
        add_node(&id_map_head, &id_map_tail, &id_map);
        id_map = id_map->next;
    }
    return id_map_head;
}
