/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** reset_colision
*/

#include <SFML/Graphics.h>
#include "direction.h"

void reset_colision(direction_t *colision)
{
    colision->Left = false;
    colision->Right = false;
    colision->Up = false;
    colision->Down = false;
}
