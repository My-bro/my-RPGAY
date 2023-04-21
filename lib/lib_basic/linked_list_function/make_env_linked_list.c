/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-1-minishell1-axel.londas
** File description:
** make_env_linked_list
*/

#include <stdlib.h>
#include "../../Include/node.h"
#include "../../Include/proto.h"


void make_env_linked_list(char **env ,chain_t **head, chain_t **tail)
{
    int i = 0;
    while (env[i] != NULL) {
        chain_t *node = (chain_t*)malloc(sizeof(chain_t));
        add_node(head, tail, &node, env[i]);
        node->str = env[i];
        node = node->next;
        ++i;
    }
}
