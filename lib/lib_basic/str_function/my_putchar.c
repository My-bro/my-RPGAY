/*
** EPITECH PROJECT, 2022
** my_put_char
** File description:
** display the char
*/

#include <unistd.h>

void my_putchar(char c)
{
    write(1, &c, 1);
}
