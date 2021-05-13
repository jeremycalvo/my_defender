/*
** EPITECH PROJECT, 2021
** sprite
** File description:
** create sprite
*/

#include "my.h"

sfSprite *create_background(void)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile("assets/map.png", NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    return (sprite);
}

sfSprite *create_life(void)
{
    sfTexture *life_txt = sfTexture_createFromFile("assets/life.png", NULL);
    sfSprite *life_sprite = sfSprite_create();
    sfTexture_setSmooth(life_txt, sfTrue);
    sfSprite_setTexture(life_sprite, life_txt, sfFalse);
    return (life_sprite);
}

sfSprite *create_p1(void)
{
    sfTexture *p1_txt = sfTexture_createFromFile("assets/PLAYER 1.png", NULL);
    sfSprite *p1_sprite = sfSprite_create();
    sfTexture_setSmooth(p1_txt, sfTrue);
    sfSprite_setTexture(p1_sprite, p1_txt, sfFalse);
    return (p1_sprite);
}

sfSprite *create_p2(void)
{
    sfTexture *p2_txt = sfTexture_createFromFile("assets/PLAYER 2.png", NULL);
    sfSprite *p2_sprite = sfSprite_create();
    sfTexture_setSmooth(p2_txt, sfTrue);
    sfSprite_setTexture(p2_sprite, p2_txt, sfFalse);
    return (p2_sprite);
}