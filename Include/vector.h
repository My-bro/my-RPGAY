/*
** EPITECH PROJECT, 2023
** B-MUL-200-PAR-2-1-myrpg-alexandre.molina
** File description:
** vector
*/

#include <SFML/Graphics.h>

#ifndef VECTOR_H_
    #define VECTOR_H_
        typedef struct vector_s {
            sfVector2f vector_pos;
            struct vector_s *next;
        } vector_t;
#endif /* !VECTOR_H_ */
