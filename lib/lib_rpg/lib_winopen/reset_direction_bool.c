/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** reset_direction
*/

#include <SFML/Graphics.h>
#include "graphique.h"

void reset_colision(direction_t *colision);

void reset_direction_bool(graph_t *graph)
{
    reset_colision(&graph->colision);
    reset_colision(&graph->direction);
}
