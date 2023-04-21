/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** init_sprite_config
*/

#include <SFML/Graphics.h>
#include <stdlib.h>
#include "node.h"
#include <stdio.h>

char **pars_the_path(char *str,char *sep);
char *buffer_maker(char *path);
node_map_t *add_node(node_map_t **head, node_map_t **tail, node_map_t **node);

static void add_struct_values(node_map_t *id_map, char **info_db)
{
    id_map->name = info_db[0];
    id_map->type = info_db[1];
    id_map->vector = (sfVector2f) {atoi(info_db[2]),atoi(info_db[3])};
    id_map->path = info_db[4];
    id_map->sprite = sfSprite_create();
    id_map->texture = sfTexture_createFromFile(id_map->path, NULL);
    id_map->image = sfImage_createFromFile(id_map->path);
}

node_map_t *init_sprite_config(void)
{
    char *config_file_buffer = buffer_maker("./src/config_file/\
config_map_over_world.txt");
    char **config_file_db = pars_the_path(config_file_buffer,"\n");
    node_map_t *id_map_head = NULL;
    node_map_t *id_map_tail = NULL;
    node_map_t *id_map = NULL;
    char **info_db = NULL;
    for (int i = 0; config_file_db[i] != NULL; i += 1) {
        char **info_db = pars_the_path(config_file_db[i]," []:\n");
        id_map = malloc(sizeof(node_map_t));
        add_struct_values(id_map, info_db);
        sfSprite_setTexture(id_map->sprite ,id_map->texture,sfTrue);
        sfFloatRect bounds = sfSprite_getGlobalBounds(id_map->sprite );
        id_map->vector_3 = (sfVector2f){bounds.width,bounds.height};
        sfSprite_setPosition(id_map->sprite ,id_map->vector);
        add_node(&id_map_head, &id_map_tail, &id_map);
        id_map = id_map->next;
    }
    return id_map_head;
}
