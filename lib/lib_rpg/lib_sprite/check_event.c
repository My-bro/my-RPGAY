/*
** EPITECH PROJECT, 2023
** check_event
** File description:
** check_event
*/

#include "characters.h"
#include "direction.h"

void check_event_direct(sfEvent event)
{
    if (event.joystickMove.axis == sfJoystickPovX) {
        if (event.joystickMove.position < -50.f) {
            printf("Flèche gauche\n");
        }
        if (event.joystickMove.position > 50.f) {
            printf("Flèche droite\n");
        }
    }
    if (event.joystickMove.axis == sfJoystickPovY) {
        if (event.joystickMove.position < -50.f) {
            printf("Flèche haut\n");
        }
        if (event.joystickMove.position > 50.f) {
            printf("Flèche bas\n");
        }
    }
}

void check_event_axis_x(sfEvent event, animations_t *animations,
direction_t *direction)
{
    if (event.joystickMove.axis == sfJoystickX
|| sfKeyboard_isKeyPressed(sfKeyLeft)
|| sfKeyboard_isKeyPressed(sfKeyRight)) {
        if (event.joystickMove.position < -50.f
|| sfKeyboard_isKeyPressed(sfKeyLeft)) {
            direction->Left = true;
            check_clock_axis_x_left(animations);
        }
        if (event.joystickMove.position > 50.f
|| sfKeyboard_isKeyPressed(sfKeyRight)) {
            direction->Right = true;
            check_clock_axis_x_right(animations);
        }
    }
}

void check_event_axis_y(sfEvent event, animations_t *animations,
direction_t *direction)
{
    if (event.joystickMove.axis == sfJoystickY
|| sfKeyboard_isKeyPressed(sfKeyUp)
|| sfKeyboard_isKeyPressed(sfKeyDown)) {
        if (event.joystickMove.position < -50.f
|| sfKeyboard_isKeyPressed(sfKeyUp)) {
            direction->Up = true;
            check_event_axis_y_up(animations);
        }
        if (event.joystickMove.position > 50.f
|| sfKeyboard_isKeyPressed(sfKeyDown)) {
            direction->Down = true;
            check_event_axis_y_down(animations);
        }
    }
}

static void exec_event(sfRenderWindow *window, sfEvent *event,
animations_t *animations, direction_t *direction)
{
    if (event->type == sfEvtClosed) {
        sfRenderWindow_close(window);
    }
    if (event->type == sfEvtResized) {
        sfVector2u size = {event->size.width,event->size.height};
        sfRenderWindow_setSize(window, size);
    }
    if (event->type == sfEvtJoystickMoved
|| sfKeyboard_isKeyPressed(sfKeyLeft)
|| sfKeyboard_isKeyPressed(sfKeyRight)
|| sfKeyboard_isKeyPressed(sfKeyUp)
|| sfKeyboard_isKeyPressed(sfKeyDown)) {
        check_event_direct(*event);
        check_event_axis_x(*event, animations, direction);
        check_event_axis_y(*event, animations, direction);
    }
}

void check_event(sfRenderWindow *window, sfEvent *event,
animations_t *animations, direction_t *direction)
{
    while (sfRenderWindow_pollEvent(window, event)) {
        exec_event(window, event, animations, direction);
    }
}
