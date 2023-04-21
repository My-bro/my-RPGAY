/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** init_every_struct
*/

#include <SFML/Graphics.h>
#include "view.h"
#include "characters.h"

void init_view_struct(view_t *view);

void init_every_struct(view_t *view, animations_t *animations)
{
    init_view_struct(view);
    init_values_characters(animations, *view);
    init_clock(animations);
}
