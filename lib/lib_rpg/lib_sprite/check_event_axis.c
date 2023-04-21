/*
** EPITECH PROJECT, 2023
** check_event_axis
** File description:
** check_event_axis
*/

#include "characters.h"

void check_clock_axis_x_left(animations_t *animations)
{
    ElapsedTime += sfTime_asSeconds(sfClock_restart(Clock));
    if (ElapsedTime >= FrameDuration) {
        CurrentFrame = (CurrentFrame + 1) % FrameCount;
        FrameLeft.left = FrameLeft.left - 32;
        if (FrameLeft.left == 64) {
            FrameLeft.left = 160;
        }
        sfSprite_setTextureRect(SpriteCharacters, FrameLeft);
        ElapsedTime = 0;
    }
}

void check_clock_axis_x_right(animations_t *animations)
{
    ElapsedTime += sfTime_asSeconds(sfClock_restart(Clock));
    if (ElapsedTime >= FrameDuration) {
        CurrentFrame = (CurrentFrame + 1) % FrameCount;
        FrameRight.left = FrameRight.left - 32;
        if (FrameRight.left == 64) {
            FrameRight.left = 160;
        }
        sfSprite_setTextureRect(SpriteCharacters, FrameRight);
        ElapsedTime = 0;
    }
}

void check_event_axis_y_up(animations_t *animations)
{
    ElapsedTime += sfTime_asSeconds(sfClock_restart(Clock));
    if (ElapsedTime >= FrameDuration) {
        CurrentFrame = (CurrentFrame + 1) % FrameCount;
        FrameUp.left = FrameUp.left - 32;
        if (FrameUp.left == 64) {
            FrameUp.left = 160;
        }
        sfSprite_setTextureRect(SpriteCharacters, FrameUp);
        ElapsedTime = 0;
    }
}

void check_event_axis_y_down(animations_t *animations)
{
    ElapsedTime += sfTime_asSeconds(sfClock_restart(Clock));
    if (ElapsedTime >= FrameDuration) {
        CurrentFrame = (CurrentFrame + 1) % FrameCount;
        FrameDown.left = FrameDown.left - 32;
        if (FrameDown.left == 64) {
            FrameDown.left = 160;
        }
        sfSprite_setTextureRect(SpriteCharacters, FrameDown);
        ElapsedTime = 0;
    }
}
