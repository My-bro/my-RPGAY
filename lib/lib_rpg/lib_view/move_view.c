/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** move_view_mali
*/

#include <SFML/Graphics.h>
#include "direction.h"

int const mids = 280;
int const mids_x = 290;

static void check_overflow_cam_mali(sfVector2f *pos_cam)
{
    if (pos_cam->x > lim_cam_x) {
        pos_cam->x = lim_cam_x;
    }
    if (pos_cam->x < 100) {
        pos_cam->x = 100;
    }
    if (pos_cam->y < 200) {
        pos_cam->y = 200;
    }
    if (pos_cam->y > lim_cam_y) {
        pos_cam->y = lim_cam_y;
    }
}

static void check_y_move_cam(direction_t *colision, sfVector2f *pos_cam,
sfVector2f current_position)
{
    if (colision->Up) {
        if (current_position.y < lim_sprite_y - mids) {
            pos_cam->y -= velocity;
        }
    }
    if (colision->Down) {
        if (current_position.y > mids) {
            pos_cam->y += velocity;
        }
    }
}

static void check_x_move_cam(direction_t *colision, sfVector2f *pos_cam,
sfVector2f current_position)
{
    if (colision->Left) {
        if (current_position.x < lim_sprite_x - mids_x) {
            pos_cam->x -= velocity;
        }
    }
    if (colision->Right) {
        if (current_position.x > mids_x) {
            pos_cam->x += velocity;
        }
    }
}

void move_view(sfRenderWindow *window, direction_t *colision,
sfCircleShape *circle, sfVector2f *pos_cam)
{
    sfVector2f current_position = sfCircleShape_getPosition(circle);
    check_y_move_cam(colision, pos_cam, current_position);
    check_x_move_cam(colision, pos_cam, current_position);
    check_overflow_cam_mali(pos_cam);
}
