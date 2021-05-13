/*
** EPITECH PROJECT, 2021
** event
** File description:
** Manage event
*/

#include "my.h"

void manage_event(sfRenderWindow *win, s_tower **tower, int *coins, assets a)
{
    sfEvent event;
    static int choice = 0;
    a.wndw = win;
    while (sfRenderWindow_pollEvent(win, &event)) {
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(win);
        if (sfKeyboard_isKeyPressed(sfKeyEscape))
            sfRenderWindow_close(win);
        if (sfMouse_isButtonPressed(sfMouseRight))
            choice = 0;
        if (sfMouse_isButtonPressed(sfMouseLeft)) {
            (choice >= 1) && (choice <= 4) && \
            (tower_placer(choice, tower, coins, a));
            (choice == 5) && (tower_seller(win, choice, tower, &a));
            choice = 0;
            choice = buttons_select(win, a);
        }
    }
    if (choice != 0)
        print_border(win, choice);
}