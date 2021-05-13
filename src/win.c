/*
** EPITECH PROJECT, 2021
** win
** File description:
** win
*/

#include "my.h"

int win_event(sfRenderWindow *window)
{
    sfVector2i hg1 = {170, 885};
    sfVector2i bd1 = {875, 1050};
    sfVector2i hg2 = {1110, 885};
    sfVector2i bd2 = {1815, 1050};
    sfEvent event;
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtMouseButtonPressed) {
            if (is_clicked(hg1, bd1, window))
                return (0);
            if (is_clicked(hg2, bd2, window))
                return (2);
        }
    }
    return (1);
}

int win_screen(sfRenderWindow *window, char *path, assets a)
{
    int end = 1;
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile("assets/win.png", NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSound_play(a.win_sound);

    while (sfRenderWindow_isOpen(window) && end) {
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
        end = win_event(window);
        if (end == 0)
            defender(window, path);
        if (end == 2)
            sfRenderWindow_close(window);
    }
}