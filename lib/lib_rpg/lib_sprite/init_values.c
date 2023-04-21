/*
** EPITECH PROJECT, 2023
** init_values
** File description:
** init_values
*/

#include "characters.h"
#include "view.h"

void init_circle(animations_t *animations, view_t view)
{
    animations->shape = sfCircleShape_create();
    sfCircleShape_setFillColor(animations->shape, sfBlack);
    sfCircleShape_setRadius(animations->shape, 10.f);
    animations->circfrstpos = (sfVector2f){view.pos_cam.x + 0,
view.pos_cam.y + 0};
    sfCircleShape_setPosition(animations->shape,  animations->circfrstpos);
}

void init_texture_characters(animations_t *animations)
{
    TextureCharacters = sfTexture_createFromFile("./src/sprite/player/\
characters.png", NULL);
    SpriteCharacters = sfSprite_create();
    sfSprite_setTexture(SpriteCharacters, TextureCharacters, sfTrue);
    sfSprite_setScale(SpriteCharacters, (sfVector2f){0.68, 0.68});
}

void init_characters(animations_t *animations)
{
    FrameRight.width = FrameWidth;
    FrameRight.height = FrameHeight;
    FrameRight.left = 160;
    FrameRight.top = 290;
    FrameUp.width = FrameWidth;
    FrameUp.height = FrameHeight;
    FrameUp.left = 160;
    FrameUp.top = 340;
    sfSprite_setTextureRect(SpriteCharacters, FrameDown);
    sfSprite_setTextureRect(SpriteCharacters, FrameLeft);
    sfSprite_setTextureRect(SpriteCharacters, FrameRight);
    sfSprite_setTextureRect(SpriteCharacters, FrameUp);
}

void init_values_characters(animations_t *animations, view_t view)
{
    init_texture_characters(animations);
    FrameWidth = 32;
    FrameHeight = 50;
    FrameCount = 3;
    FrameDuration = 0.1;
    FrameDown.width = FrameWidth;
    FrameDown.height = FrameHeight;
    FrameDown.left = 160;
    FrameDown.top = 190;
    FrameLeft.width = FrameWidth;
    FrameLeft.height = FrameHeight;
    FrameLeft.left = 160;
    FrameLeft.top = 240;
    init_characters(animations);
    init_circle(animations, view);
}
