/*
** EPITECH PROJECT, 2021
** buttons_select.c
** File description:
** buttons_select
*/

#include "my.h"

void destroy_sprite(sfSprite *sprite, sfTexture *texture)
{
    sfSprite_destroy(sprite);
    sfTexture_destroy(texture);
}

void print_border(sfRenderWindow *window, int choice)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile\
    ("assets/cadre_petit.png", NULL);
    BUTTONS_POS;
    sfVector2f small_to_big = {1.25, 1};
    if (choice == 1)
        sfSprite_setPosition(sprite, elec_pos);
    if (choice == 2)
        sfSprite_setPosition(sprite, snow_pos);
    if (choice == 3)
        sfSprite_setPosition(sprite, pois_pos);
    if (choice == 4)
        sfSprite_setPosition(sprite, fire_pos);
    if (choice == 5) {
        sfSprite_setPosition(sprite, sell_pos);
        sfSprite_setScale(sprite, small_to_big);
    }
    sfSprite_setTexture(sprite, texture, sfFalse);
    sfRenderWindow_drawSprite(window, sprite, NULL);
    destroy_sprite(sprite, texture);
}

int buttons_select(sfRenderWindow *window, assets a)
{
    BUTTONS_DEF;
    if (is_clicked(snow_hg, snow_bd, window)) {
        sfSound_play(a.select_sound);
        (choice = 2);
    }
    if (is_clicked(pois_hg, pois_bd, window)) {
        sfSound_play(a.select_sound);
        (choice = 3);
    }
    if (is_clicked(fire_hg, fire_bd, window)) {
        sfSound_play(a.select_sound);
        (choice = 4);
    }
    if (is_clicked(sell_hg, sell_bd, window)) {
        sfSound_play(a.select_sound);
        (choice = 5);
    }
    return (choice);
}