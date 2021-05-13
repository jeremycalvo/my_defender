/*
** EPITECH PROJECT, 2021
** sprite_2.c
** File description:
** sprite_2.c
*/

#include "my.h"

sfSprite *create_elec(void)
{
    sfTexture *elec_txt = \
    sfTexture_createFromFile("assets/elec_effect.png", NULL);
    sfSprite *elec_sprite = sfSprite_create();

    sfTexture_setSmooth(elec_txt, sfTrue);
    sfSprite_setTexture(elec_sprite, elec_txt, sfFalse);
    return (elec_sprite);
}

sfSprite *create_fire(void)
{
    sfTexture *fire_pro_txt = \
    sfTexture_createFromFile("assets/fire_pro.png", NULL);
    sfSprite *fire_pro_sprite = sfSprite_create();
    sfVector2f pos = {500, 500};

    sfSprite_setPosition(fire_pro_sprite, pos);
    sfTexture_setSmooth(fire_pro_txt, sfTrue);
    sfSprite_setTexture(fire_pro_sprite, fire_pro_txt, sfFalse);
    return (fire_pro_sprite);
}