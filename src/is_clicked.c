/*
** EPITECH PROJECT, 2020
** Visual Studio Live Share (Workspace)
** File description:
** is_clicked.c
*/

#include "my.h"

int is_clicked(sfVector2i left, sfVector2i right, sfRenderWindow *window)
{
    sfVector2i pos_mouse;
    pos_mouse = sfMouse_getPositionRenderWindow(window);

    if (pos_mouse.x >= left.x && pos_mouse.x <= right.x && \
    pos_mouse.y <= right.y && pos_mouse.y >= left.y)
        return (1);
    return (0);
}

int is_hit(sfVector2f tower, sfVector2f enemy)
{
    if (enemy.x >= tower.x - 180 && enemy.x <= tower.x + 240 && \
    enemy.y <= tower.y + 180 && enemy.y >= tower.y - 180)
        return (1);
    return (0);
}