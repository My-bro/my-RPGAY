/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-1-minishell1-axel.londas
** File description:
** add_last_node
*/

#include "../../Include/node.h"
#include "../../Include/info.h"
#include <stdlib.h>
#include <stdio.h>

chain_t *add_node(chain_t **head, chain_t **tail,chain_t **node,char *str);

void add_last_node(chain_t **head, chain_t **tail,char *str)
{
    chain_t *node = (chain_t*)malloc(sizeof(chain_t));
    node->str = str;
    if (*head == NULL) {
        add_node(head, tail, &node,str);
        return;
    }
    add_node(head, tail , &node,str);
}
