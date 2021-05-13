/*
** EPITECH PROJECT, 2020
** event_main.c
** File description:
** event_main
*/
#include "my.h"

int event_main(sfRenderWindow *window)
{
    sfEvent event;
    sfVector2i p1_hg = {450, 413};
    sfVector2i p1_bd = {1514, 588};
    sfVector2i p2_hg = {450, 669};
    sfVector2i p2_bd = {1514, 844};
    sfVector2i ex_hg = {1845, 0};
    sfVector2i ex_bd = {1920, 33};

    while (sfRenderWindow_pollEvent(window, &event)) {
        if (event.type == sfEvtMouseButtonPressed) {
            if (is_clicked(p1_hg, p1_bd, window) == 1)
                return (1);
            if (is_clicked(p2_hg, p2_bd, window) == 1)
                return (2);
            if (is_clicked(ex_hg, ex_bd, window) == 1)
                sfRenderWindow_close(window);
        }
    }
    return (0);
}