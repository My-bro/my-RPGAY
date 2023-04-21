/*
** EPITECH PROJECT, 2023
** B-PSU-200-PAR-2-1-minishell1-axel.londas
** File description:
** cdstl_1
*/

#include "swa.h"

int isalphal_path(char c,char *sep);

void cdstl_2(STR_T *info,char *str, int i)
{
    if (isalphal_path(info->str[i],info->sep) == 1) {
            info->BIG_ARRAY[info->j][info->k] = str[i];
            ++info->k;
    }
}
