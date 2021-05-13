/*
** EPITECH PROJECT, 2021
** attack
** File description:
** attack
*/

#include "my.h"

void attack(sfRenderWindow *window, enemy *tmp_e, int type, assets a)
{
    (type == 1) ? (elec_attack(window, &tmp_e, a)) : 0;
    (type == 2) ? (snow_attack(window, &tmp_e, a)) : 0;
    (type == 3) ? (pois_attack(window, &tmp_e, a)) : 0;
    (type == 4) ? (fire_attack(window, &tmp_e, a)) : 0;
}

void wait_attack(sfRenderWindow *window, \
s_tower **tower, enemy **enemies, assets a)
{
    static int i = 0;
    if (i == 10)
        check_attack(window, tower, enemies, a);
    i++;
    if (i > 10)
        i = 0;
}

void check_attack(sfRenderWindow *window, \
s_tower **tower, enemy **enemies, assets a)
{
    enemy *tmp_e = *enemies;
    s_tower *tmp_t = *tower;
    sfVector2f pos_t;
    sfVector2f pos_e;
    for (; tmp_t != NULL; tmp_t = tmp_t->next) {
        pos_t = sfSprite_getPosition(tmp_t->sprite);
        tmp_e = *enemies;
        for (; tmp_e != NULL; tmp_e = tmp_e->next) {
            pos_e = sfSprite_getPosition(tmp_e->sprite);
            if (is_hit(pos_t, pos_e))
                attack(window, tmp_e, tmp_t->type, a);
        }
    }
}