/*
** EPITECH PROJECT, 2021
** print_towers.c
** File description:
** Print Towers
*/

#include "my.h"

void print_towers(sfRenderWindow *window, s_tower **tower)
{
    s_tower *tmp = *tower;
    for (; tmp != NULL; tmp = tmp->next) {
        sfRenderWindow_drawSprite(window, tmp->sprite, NULL);
    }
}