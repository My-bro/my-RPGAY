/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** buffer_maker
*/

#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <unistd.h>

char *buffer_maker(char *path)
{
    struct stat bloc;
    stat(path, &bloc);
    int file = open(path, O_RDONLY);
    char *buffer = malloc(sizeof(char) * (bloc.st_size + 1));
    int byte = read(file,buffer,bloc.st_size);
    buffer[byte] = '\0';
    return buffer;
}
