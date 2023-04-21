/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-1-minishell1-axel.londas
** File description:
** pars_the_path
*/

#include <stdio.h>
#include <stdlib.h>
#include "swa.h"

int my_strlen(char const *str);
void init_swa_path(STR_T *info, char *str,char *sep);
void cdstl_2(STR_T *info,char *str, int i);

int isalphal_path(char c, char *str)
{
    int i = 0;
    if (c == '\0') {
        return (0);
    }
    while (str[i] != '\0') {
        if (c == str[i]) {
            return (0);
        }
        ++i;
    }
    return (1);
}

void countword_path(STR_T *info)
{
    info->number_line = 0;
    for (int i = 0; info->str[i] != '\0'; ++i) {
        if (isalphal_path(info->str[i],info->sep) == 1 &&
isalphal_path(info->str[i + 1],info->sep) == 0) {
            ++info->number_line;
        }
    }
}

void countletter_path(STR_T *info)
{
    info->tab = malloc(sizeof(int) * (info->number_line + 1));
    int j = 0;
    info->tab[j] = 0;
    for (int i = 0; info->str[i] != '\0' ; ++i) {
        if (isalphal_path(info->str[i],info->sep) == 1) {
            info->tab[j] += 1;
        }
        if (isalphal_path(info->str[i],info->sep) == 1 &&
isalphal_path(info->str[i + 1],info->sep) == 0) {
            ++j;
            info->tab[j] = 0;
        }
        if (info->str[i] == '\0') {
            break;
        }
    }
}

void malloc_func_path(STR_T *info)
{
    info->BIG_ARRAY = malloc(sizeof(char*) * (info->number_line + 1));
    for (int i = 0; i < info->number_line; ++i) {
        info->BIG_ARRAY[i] = malloc(sizeof(char) * (info->tab[i] + 1));
        for (int j = 0; j <= info->tab[i] ; ++j) {
            info->BIG_ARRAY[i][j] = 0;
        }
    }
}

char **pars_the_path(char *str,char *sep)
{
    STR_T info;
    init_swa_path(&info, str, sep);
    for (int i = 0; i < info.len; ++i) {
        if (isalphal_path(info.str[i],info.sep) == 1 &&
isalphal_path(info.str[i + 1],info.sep) == 0) {
            info.BIG_ARRAY[info.j][info.k] = str[i];
            info.BIG_ARRAY[info.j][info.k + 1] = '\0';
            ++info.j;
            info.k = 0;
            ++i;
        }
        if (info.j >= info.number_line) {
                break;
        }
        cdstl_2(&info, str, i);
    }
    info.BIG_ARRAY[info.number_line] = NULL;
    return info.BIG_ARRAY;
}
