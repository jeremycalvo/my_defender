/*
** EPITECH PROJECT, 2021
** tower
** File description:
** Tower attack function
*/

#include "my.h"

sfTexture *different_towers(int choice)
{
    sfTexture *texture;
    if (choice == 1)
        texture = sfTexture_createFromFile("assets/electric.png", NULL);
    if (choice == 2)
        texture = sfTexture_createFromFile("assets/ice.png", NULL);
    if (choice == 3)
        texture = sfTexture_createFromFile("assets/poison.png", NULL);
    if (choice == 4)
        texture = sfTexture_createFromFile("assets/lava.png", NULL);
    return (texture);
}

sfVector2f get_tower_pos(int c)
{
    sfVector2f pos;
    (c == 1) && (pos.x = 130) && (pos.y = 80);
    (c == 2) && (pos.x = 488) && (pos.y = 81);
    (c == 3) && (pos.x = 611) && (pos.y = 319);
    (c == 4) && (pos.x = 1087) && (pos.y = 560);
    (c == 5) && (pos.x = 1448) && (pos.y = 198);
    (c == 6) && (pos.x = 252) && (pos.y = 324);
    (c == 7) && (pos.x = 492) && (pos.y = 567);
    (c == 8) && (pos.x = 1331) && (pos.y = 682);
    (c == 9) && (pos.x = 1332) && (pos.y = 444);
    return (pos);
}

void create_tower(s_tower **tower, int choice, int slot)
{
    s_tower *tmp = *tower;
    s_tower *element = malloc(sizeof(s_tower));
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture;
    sfVector2f pos = get_tower_pos(slot);
    texture = different_towers(choice);
    sfTexture_setSmooth(texture, sfTrue);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, pos);
    element->next = NULL;
    element->type = choice;
    element->pos = slot;
    element->sprite = sprite;
    if (*tower == NULL) {
        *tower = element;
        return;
    }
    for (; tmp->next != NULL; tmp = tmp->next);
    tmp->next = element;
}