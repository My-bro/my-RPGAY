/*
** EPITECH PROJECT, 2023
** Epitech-Jam
** File description:
** case_came
*/

#include <SFML/Graphics.h>
#include "view.h"

void set_cam(sfRenderWindow *window, view_t *cam, int flag_cam)
{
    if (flag_cam == 0) {
        cam->pos_cam = cam->moved_cam;
    } else {
        cam->moved_cam = cam->pos_cam;
    }
    sfView_reset(cam->view1, (sfFloatRect){cam->pos_cam.x,
cam->pos_cam.y, 420, 220});
    sfRenderWindow_setView(window, cam->view1);
}
