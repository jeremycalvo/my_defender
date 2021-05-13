/*
** EPITECH PROJECT, 2021
** enemy_debuffer
** File description:
** enemy_debuffer
*/

#include "my.h"

void enemy_debuffer(enemy **enemies)
{
    enemy *tmp_e = *enemies;
    static int i = 0;
    if (i == 10) {
        for (; tmp_e != NULL; tmp_e = tmp_e->next) {
            if (tmp_e->speed < tmp_e->max_speed) {
                tmp_e->speed += 1;
                sfSprite_setColor(tmp_e->sprite, sfBlue);
            }
            if (tmp_e->poison > 0) {
                tmp_e->pv -= 1;
                tmp_e->poison -= 1;
                sfSprite_setColor(tmp_e->sprite, sfGreen);
            }
            if (tmp_e->poison == 0 && tmp_e->speed == tmp_e->max_speed)
                sfSprite_setColor(tmp_e->sprite, sfWhite);
        }
    }
    i++;
    if (i > 10)
        i = 0;
}