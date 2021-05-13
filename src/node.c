/*
** EPITECH PROJECT, 2021
** node
** File description:
** Manage linked list
*/

#include "my.h"

void delete_enemy(enemy **enemies, enemy **node)
{
    enemy *tmp = *enemies;
    enemy *tmp2 = *node;
    if (*enemies == *node) {
        *enemies = tmp->next;
    } else {
        for (; tmp->next != *node; tmp = tmp->next);
        tmp->next = tmp2->next;
    }
    free(tmp2);
}

void delete_tower(s_tower **tower, s_tower **node)
{
    s_tower *tmp = *tower;
    s_tower *tmp2 = *node;
    if (*tower == *node) {
        *tower = tmp->next;
    } else {
        for (; tmp->next != *node; tmp = tmp->next);
        tmp->next = tmp2->next;
    }
    free (tmp2);
}