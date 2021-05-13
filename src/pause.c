/*
** EPITECH PROJECT, 2021
** pause
** File description:
** pause
*/

#include "my.h"

int pause_event(sfRenderWindow *window)
{
    sfVector2i hg1 = {610, 330};
    sfVector2i bd1 = {1440, 475};
    sfVector2i hg2 = {620, 540};
    sfVector2i bd2 = {1440, 690};
    sfVector2i hg3 = {610, 740};
    sfVector2i bd3 = {1440, 900};
    sfEvent event;
    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtMouseButtonPressed) {
        if (is_clicked(hg1, bd1, window))
            return (1);
        if (is_clicked(hg2, bd2, window))
            return (2);
        if (is_clicked(hg3, bd3, window));
            return (3);
        }
    }
    return (0);
}

int pause_game(sfRenderWindow *window, char *path)
{
    int loop = 1;
    int end = 0;
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile("assets/pause.png", NULL);
    sfSprite_setTexture(sprite, texture, sfTrue);
    while (sfRenderWindow_isOpen(window) && loop) {
        end = pause_event(window);
        sfRenderWindow_clear(window, sfBlack);
        sfRenderWindow_drawSprite(window, sprite, NULL);
        sfRenderWindow_display(window);
        if (end == 1)
            return (1);
        if (end == 2)
            defender(window, path);
        if (end == 3) {
            sfRenderWindow_close(window);
            return (0);
        }
    }
}