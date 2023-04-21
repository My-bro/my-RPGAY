/*
** EPITECH PROJECT, 2022
** 17
** File description:
** strcmp
*/

#include <stdio.h>

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;
    while (s1[i] != '\0') {
        if (s1[i] != s2[i]) {
            return (0);
        } else {
            ++i;
        }
    }
    return (1);
}
