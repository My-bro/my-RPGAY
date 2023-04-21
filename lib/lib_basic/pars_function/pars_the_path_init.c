/*
** EPITECH PROJECT, 2023
** B-PSU-100-PAR-1-1-sokoban-axel.londas
** File description:
** no_valgrind_init
*/

#include <stdio.h>
#include <stdlib.h>
#include "swa.h"

void countword_path(STR_T *info);
void countletter_path(STR_T *info);
void malloc_func_path(STR_T *info);
int my_strlen(char const *str);

void init_swa_path(STR_T *info, char *str,char *sep)
{
    info->str = str;
    info->len = my_strlen(str);
    info->number_line = 0;
    info->sep = sep;
    countword_path(info);
    countletter_path(info);
    malloc_func_path(info);
    info->j = 0;
    info->k = 0;
}

int ret_countword(char *str,char *sep)
{
    STR_T info;
    init_swa_path(&info, str, sep);
    return info.number_line;
}
