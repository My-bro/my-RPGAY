/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-1-minishell1-axel.londas
** File description:
** add_node
*/

#include <string.h>
#include <stdio.h>
#include "../../../Include/node.h"
#include "../../../Include/vector.h"

node_map_t *add_node(node_map_t **head, node_map_t **tail, node_map_t **node)
{
    if (*head == NULL) {
        *head = *node;
        *tail = *node;
    } else {
        (*tail)->next = *node;
        *tail = *node;
        (*tail)->next = NULL;
    }
    return *head;
}

vector_t *add_node_vector(vector_t **head, vector_t **tail, vector_t **node)
{
    if (*head == NULL) {
        *head = *node;
        *tail = *node;
    } else {
        (*tail)->next = *node;
        *tail = *node;
        (*tail)->next = NULL;
    }
    return *head;
}
