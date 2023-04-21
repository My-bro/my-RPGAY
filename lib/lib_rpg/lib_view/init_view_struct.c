/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** init_view_struct
*/


#include <SFML/Graphics.h>
#include "view.h"

void init_view_struct(view_t *view)
{
    view->view1 = sfView_createFromRect((sfFloatRect){0, 0, 500, 500});
    view->pos_cam = (sfVector2f){100,200};
    view->moved_cam = view->pos_cam;
    view->flag_cam = 0;
}
