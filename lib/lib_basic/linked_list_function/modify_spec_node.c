/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-1-minishell1-axel.londas
** File description:
** modify_spec_node
*/

#include "../../Include/info.h"
#include "../../Include/node.h"
#include <stdlib.h>
#include <stdio.h>

char *my_strncpy(char *dest, char const *src, int n, int n2);
int my_strcmp(char const *s1, char const *s2);
int my_strlen(char const *str);

void modify_spec_node(char **db, chain_t *head,char *cmp, char *str)
{
    char *copy;
    while (head->next != NULL) {
        copy = my_strncpy(copy,head->str,0,my_strlen(db[1]) + 1);
        if (my_strcmp(cmp,copy) == 1) {
            break;
        }
        head = head->next;
    }
    if (head == NULL) {
        return;
    } else {
        head->str = str;
    }
}
