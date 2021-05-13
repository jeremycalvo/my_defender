/*
** EPITECH PROJECT, 2020
** players.c
** File description:
** players
*/
#include "my.h"

void player_1(sfRenderWindow *window, sfSprite *p1_sprite, sfVector2f p1_pos)
{
    sfSprite_setPosition(p1_sprite, p1_pos);
    sfRenderWindow_drawSprite(window, p1_sprite, NULL);
}