/*
** EPITECH PROJECT, 2021
** tower_attack.c
** File description:
** tower_attack
*/

#include "my.h"

void elec_attack(sfRenderWindow *window, enemy **enemies, assets a)
{
    enemy *tmp = *enemies;
    tmp->pv -= 1;
    sfSound_play(a.elec_sound);
}

void snow_attack(sfRenderWindow *window, enemy **enemies, assets a)
{
    enemy *tmp = *enemies;
    if (tmp->max_speed == 5)
        if (tmp->speed > 2)
            tmp->speed -= 2;
    if (tmp->max_speed == 3)
        if (tmp->speed > 1)
            tmp->speed -= 2;
    sfSound_play(a.elec_sound);
}

void pois_attack(sfRenderWindow *window, enemy **enemies, assets a)
{
    enemy *tmp = *enemies;
    tmp->poison = 20;
    sfSound_play(a.elec_sound);

}

void fire_attack(sfRenderWindow *window, enemy **enemies, assets a)
{
    enemy *tmp = *enemies;
    tmp->pv -= 4;
    sfSound_play(a.elec_sound);
}