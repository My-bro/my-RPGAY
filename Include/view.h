/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** view
*/

#ifndef VIEW_H_
    #define VIEW_H_
        #include <SFML/Graphics.h>
        typedef struct view_s {
            sfView *view1;
            sfVector2f pos_cam;
            sfVector2f moved_cam;
            int flag_cam;
        } view_t;
#endif /* !VIEW_H_ */
