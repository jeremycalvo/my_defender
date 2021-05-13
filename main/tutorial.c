/*
** EPITECH PROJECT, 2021
** tutorial.c
** File description:
** tutorial
*/

#include "my.h"

void tutorial(sfRenderWindow *window)
{
    sfTexture *tuto_txt = sfTexture_createFromFile("assets/tuto.png", NULL);
    sfSprite *tuto_sprite = sfSprite_create();
    sfEvent event;
    sfVector2i exit_hg = {0, 0};
    sfVector2i exit_bd = {108, 108};

    while (sfRenderWindow_isOpen) {
        sfSprite_setTexture(tuto_sprite, tuto_txt, sfFalse);
        sfRenderWindow_drawSprite(window, tuto_sprite, NULL);
        sfRenderWindow_display(window);
        sfRenderWindow_clear(window, sfBlack);
        if (sfKeyboard_isKeyPressed(sfKeyEscape))
            return;
        if (sfMouse_isButtonPressed(sfMouseLeft))
            if (is_clicked(exit_hg, exit_bd, window))
                return;
    }
}