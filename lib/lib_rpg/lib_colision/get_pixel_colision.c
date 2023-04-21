/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** get_pixel_colision
*/

#include <SFML/Graphics.h>
#include <stdio.h>
#include "pixel_colisition.h"
#include "node.h"

int my_strcmp(char const *s1, char const *s2);

int check_x_axis(node_map_t *map_node, sfVector2f pos_circle,
unsigned int left[2], unsigned int right[2])
{
    printf("aaaa %f\n",map_node->vector_3.x );
    printf("left values %u\n",left[0]);
    if (left[0] < 2 ){
        return -1;
    }
     printf("right values %u\n",right[0]);
     if (right[0] > map_node->vector_3.x - 20) {
        return -1;
    }
    printf("1\n");
    map_node->pixel_colision.Color_left =
sfImage_getPixel(map_node->image, left[0], left[1]);
    printf("2\n");
    map_node->pixel_colision.Color_right =
sfImage_getPixel(map_node->image,right[0] , right[1]);
     printf("3\n");
    return 0;
}

int check_y_axis(node_map_t *map_node, sfVector2f pos_circle,
unsigned int up[2], unsigned int down[2])
{
    printf("bbb %f\n",map_node->vector_3.y );
     printf("up values %f\n",up[1]);
    if (up[1] < 4) {
        return -1;
    }
    printf("down values %f\n",down[1]);
     if (down[1] > map_node->vector_3.y - 20) {
        return -1;
    }
     printf("4\n");
    map_node->pixel_colision.Color_up =
sfImage_getPixel(map_node->image, up[0], up[1]);
     printf("5\n");
    map_node->pixel_colision.Color_down =
sfImage_getPixel(map_node->image, down[0] , down[1]);
     printf("6\n");
    return 0;
}


void get_pixel_colision(node_map_t *map_node,
sfVector2f pos_circle)
{
   while (map_node != NULL) {
        int x = map_node->vector.x;
        int y = map_node->vector.y;
        if (my_strcmp(map_node->type,"Colision") == 1) {
            printf("name : %s\n",map_node->name);
            //printf("x : %d y : %d\n",map_node->name);
            unsigned int left[2]  = {pos_circle.x - 0 - x,pos_circle.y + 5 - y};
            unsigned int right[2] = { pos_circle.x + 20 - x, pos_circle.y - y};
            unsigned int up[2] = { pos_circle.x + 5 - x , pos_circle.y - 2 - y};
            unsigned int down[2]  = {  pos_circle.x + 5 - x , pos_circle.y + 12 - y};
            printf("x : %u, y : %u\n", left[0],left[1]);
            check_x_axis(map_node, pos_circle, left, right);
            check_y_axis(map_node, pos_circle, up, down);
        }
        map_node = map_node->next;
    }
}
