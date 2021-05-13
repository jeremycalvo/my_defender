/*
** EPITECH PROJECT, 2021
** life.c
** File description:
** life
*/

#include "my.h"

void life(sfRenderWindow *window, int life_pt, sfSprite *sprite)
{
    sfIntRect life_rect;
    life_rect.left = 0;
    life_rect.height = 185;
    life_rect.width = 670;
    if (life_pt >= 1 && life_pt <= 6)
        life_rect.top = (life_pt - 1) * 185;
    if (life == 0)
        life_rect.top = 1200;
    sfVector2f pos = {1740, 240};
    sfVector2f scale = {0.25, 0.25};

    sfSprite_setTextureRect(sprite, life_rect);
    sfSprite_setPosition(sprite, pos);
    sfSprite_setScale(sprite, scale);
    sfRenderWindow_drawSprite(window, sprite, NULL);
}

