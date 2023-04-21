/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-1-minishell1-axel.londas
** File description:
** free_db_array
*/

#include <stdio.h>
#include <stdlib.h>

void free_double_array(char **db)
{
    for (int i = 0; db[i] != NULL ; ++i) {
        free(db[i]);
    }
    free(db);
}
