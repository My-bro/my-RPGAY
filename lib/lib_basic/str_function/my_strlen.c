/*
** EPITECH PROJECT, 2022
** task3
** File description:
** len
*/
#include <stdio.h>

int my_strlen(char const *str)
{
    int i;

    i = 0;
    while (str[i] != '\0') {
        ++i;
    }
    return (i);
}
