/*
** EPITECH PROJECT, 2021
** enemies
** File description:
** generate enemies
*/

#include "my.h"

void create_enemy(enemy **enemies)
{
    enemy *tmp = *enemies;
    enemy *element = malloc(sizeof(enemy));
    element->next = NULL;
    if (*enemies == NULL) {
        *enemies = element;
        return;
    }
    for (; tmp->next != NULL; tmp = tmp->next);
    tmp->next = element;
}

int add_1(enemy **enemies, int i)
{
    ADD_1_DEF;
    for (; tmp->next != NULL; tmp = tmp->next);
    pos.y = 240;
    pos.x = 0 - 100 * (i + 1);
    rect.top = 0;
    rect.left = 0;
    rect.height = 218;
    rect.width = 269;
    sfSprite_setTextureRect(sprite, rect);
    sfSprite_setPosition(sprite, pos);
    sfSprite_setScale(sprite, scale);
    tmp->sprite = sprite;
    tmp->orientation = 'E';
    tmp->move = 0;
    tmp->max_speed = 5;
    tmp->speed = 5;
    tmp->anim = 0;
    tmp->pv = 10;
    tmp->poison = 0;
}

int add_2(enemy **enemies, int i)
{
    ADD_2_DEF;
    for (; tmp->next != NULL; tmp = tmp->next);
    pos.y = 240;
    pos.x = 0 - 100 * (i + 1);
    rect.top = 0;
    rect.left = 0;
    rect.height = 218;
    rect.width = 269;
    sfSprite_setTextureRect(sprite, rect);
    sfSprite_setPosition(sprite, pos);
    sfSprite_setScale(sprite, scale);
    tmp->sprite = sprite;
    tmp->orientation = 'E';
    tmp->move = 0;
    tmp->max_speed = 3;
    tmp->speed = 3;
    tmp->anim = 0;
    tmp->pv = 50;
    tmp->poison = 0;
}

int add_3(enemy **enemies, int i)
{
    ADD_3_DEF;
    for (; tmp->next != NULL; tmp = tmp->next);
    pos.y = 240;
    pos.x = 0 - 100 * (i + 1);
    rect.top = 0;
    rect.left = 0;
    rect.height = 218;
    rect.width = 269;
    sfSprite_setTextureRect(sprite, rect);
    sfSprite_setPosition(sprite, pos);
    sfSprite_setScale(sprite, scale);
    tmp->sprite = sprite;
    tmp->orientation = 'E';
    tmp->move = 0;
    tmp->max_speed = 1;
    tmp->speed = 1;
    tmp->anim = 0;
    tmp->pv = 300;
    tmp->poison = 0;
}

int create_map(enemy **enemies, char *map)
{
    *enemies = NULL;
    for (int i = 0; map[i]; i++) {
        if (map[i] == 'V')
            break;
        if (map[i + 1] == '\0')
            return (84);
    }
    for (int i = 0; map[i]; i++) {
        if (is_char_in_str(map[i], "123") == 0)
            continue;
        create_enemy(enemies);
        (map[i] == '1') && (add_1(enemies, i));
        (map[i] == '2') && (add_2(enemies, i));
        (map[i] == '3') && (add_3(enemies, i));
    }
    return (0);
}