/*
** EPITECH PROJECT, 2021
** game_over
** File description:
** game_over
*/

#include "my.h"

void game_over(sfRenderWindow *window, char *path, assets a)
{
    sfEvent event;
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile("assets/lose.png", NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSound_play(a.go_sound);

    while (sfRenderWindow_isOpen(window)) {
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
        if (sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(window);
        if (sfKeyboard_isKeyPressed(sfKeySpace))
            defender(window, path);
    }
}