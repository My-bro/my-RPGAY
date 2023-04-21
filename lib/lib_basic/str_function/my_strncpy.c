/*
** EPITECH PROJECT, 2022
** task2
** File description:
** counterkakashi
*/

#include <stdio.h>
#include <stdlib.h>

int my_strlen(char const *str);

char *my_strncpy(char *dest, char const *src, int n, int n2)
{
    int distance = n2 - n;
    dest = malloc(sizeof(char) * (distance + 1));
    int i = 0;
    while ( i < distance) {
        dest[i] = src[n];
        ++i;
        ++n;
    }
    dest[i] = '\0';
    return (dest);
}
