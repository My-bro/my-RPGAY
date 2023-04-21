/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-1-minishell1-axel.londas
** File description:
** number_node
*/

#include "../../Include/node.h"
#include <stdio.h>

int number_node(chain_t *head)
{
    int nb_node = 0;
    while (head != NULL) {
        head = head->next;
        ++nb_node;
    }
    return nb_node;
}
