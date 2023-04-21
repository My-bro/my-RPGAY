/*
** EPITECH PROJECT, 2023
** init_clock
** File description:
** init_clock
*/

#include "characters.h"

void init_clock(animations_t *animations)
{
    Clock = sfClock_create();
    ElapsedTime = 0;
    CurrentFrame = 0;
}
