/*
** EPITECH PROJECT, 2021
** tower_placer.c
** File description:
** Tower Placer
*/

#include "my.h"

int tower_placer(int choice, s_tower **tower, int *coins, assets a)
{
    TOWER_SELLER;
    (is_clicked(case_h1_hg, case_h1_bd, a.wndw)) ? (tower_replacer(1, choice, \
    tower, coins), choice = 0), sfSound_play(a.hammer_sound) : 0;
    (is_clicked(case_h2_hg, case_h2_bd, a.wndw)) ? (tower_replacer(2, choice, \
    tower, coins), choice = 0), sfSound_play(a.hammer_sound) : 0;
    (is_clicked(case_h3_hg, case_h3_bd, a.wndw)) ? (tower_replacer(3, choice, \
    tower, coins), choice = 0), sfSound_play(a.hammer_sound) : 0;
    (is_clicked(case_h4_hg, case_h4_bd, a.wndw)) ? (tower_replacer(4, choice, \
    tower, coins), choice = 0), sfSound_play(a.hammer_sound) : 0;
    (is_clicked(case_h5_hg, case_h5_bd, a.wndw)) ? (tower_replacer(5, choice, \
    tower, coins), choice = 0), sfSound_play(a.hammer_sound) : 0;
    (is_clicked(case_b1_hg, case_b1_bd, a.wndw)) ? (tower_replacer(6, choice, \
    tower, coins), choice = 0), sfSound_play(a.hammer_sound) : 0;
    (is_clicked(case_b2_hg, case_b2_bd, a.wndw)) ? (tower_replacer(7, choice, \
    tower, coins), choice = 0), sfSound_play(a.hammer_sound) : 0;
    (is_clicked(case_b3_hg, case_b3_bd, a.wndw)) ? (tower_replacer(8, choice, \
    tower, coins), choice = 0), sfSound_play(a.hammer_sound) : 0;
    (is_clicked(case_b4_hg, case_b4_bd, a.wndw)) ? (tower_replacer(9, choice, \
    tower, coins), choice = 0), sfSound_play(a.hammer_sound) : 0;
}

int tower_replacer(int pos, int choice, s_tower **tower, int *coins)
{
    s_tower *tmp = *tower;
    for (; tmp != NULL; tmp = tmp->next)
        if (tmp->pos == pos)
            return (0);
    if (*coins >= choice * 50) {
        create_tower(tower, choice, pos);
        *coins -= choice * 50;
    }
}