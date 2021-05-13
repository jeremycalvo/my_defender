/*
** EPITECH PROJECT, 2021
** tower_seller.c
** File description:
** tower seller
*/

#include "my.h"

int tower_seller(sfRenderWindow *win, int choice, s_tower **tower, assets *a)
{
    TOWER_SELLER;
    (is_clicked(case_h1_hg, case_h1_bd, win)) ? (tower_reseller(1, choice, \
    tower, a->coins), choice = 0), sfSound_play(a->coins_sound) : 0;
    (is_clicked(case_h2_hg, case_h2_bd, win)) ? (tower_reseller(2, choice, \
    tower, a->coins), choice = 0), sfSound_play(a->coins_sound) : 0;
    (is_clicked(case_h3_hg, case_h3_bd, win)) ? (tower_reseller(3, choice, \
    tower, a->coins), choice = 0), sfSound_play(a->coins_sound) : 0;
    (is_clicked(case_h4_hg, case_h4_bd, win)) ? (tower_reseller(4, choice, \
    tower, a->coins), choice = 0), sfSound_play(a->coins_sound) : 0;
    (is_clicked(case_h5_hg, case_h5_bd, win)) ? (tower_reseller(5, choice, \
    tower, a->coins), choice = 0), sfSound_play(a->coins_sound) : 0;
    (is_clicked(case_b1_hg, case_b1_bd, win)) ? (tower_reseller(6, choice, \
    tower, a->coins), choice = 0), sfSound_play(a->coins_sound) : 0;
    (is_clicked(case_b2_hg, case_b2_bd, win)) ? (tower_reseller(7, choice, \
    tower, a->coins), choice = 0), sfSound_play(a->coins_sound) : 0;
    (is_clicked(case_b3_hg, case_b3_bd, win)) ? (tower_reseller(8, choice, \
    tower, a->coins), choice = 0), sfSound_play(a->coins_sound) : 0;
    (is_clicked(case_b4_hg, case_b4_bd, win)) ? (tower_reseller(9, choice, \
    tower, a->coins), choice = 0), sfSound_play(a->coins_sound) : 0;
}

int tower_reseller(int pos, int choice, s_tower **tower, int *coins)
{
    s_tower *tmp = *tower;
    for (; tmp != NULL; tmp = tmp->next)
        if (tmp->pos == pos) {
            (tmp->type == 1) && (*coins += 25);
            (tmp->type == 2) && (*coins += 50);
            (tmp->type == 3) && (*coins += 100);
            (tmp->type == 4) && (*coins += 250);
            delete_tower(tower, &tmp);
            return (1);
        }
}
