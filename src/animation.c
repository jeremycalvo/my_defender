/*
** EPITECH PROJECT, 2021
** animation
** File description:
** Animate sprites
*/

#include "my.h"

void move_rect(sfIntRect *rect, int offset, int max_value, sfSprite *sprite)
{
    if (rect->left + offset >= max_value)
        rect->left = 0;
    else
        rect->left += offset;
    sfSprite_setTextureRect(sprite, *rect);
}

void animate(enemy **sprite)
{
    enemy *tmp = *sprite;
    sfIntRect rect = sfSprite_getTextureRect(tmp->sprite);
    if (tmp->anim == 2)
        move_rect(&rect, 271, 5111, tmp->sprite);
    tmp->anim++;
    if (tmp->anim > 2)
        tmp->anim = 0;
}