/*
** EPITECH PROJECT, 2021
** defender
** File description:
** defender
*/

#include "my.h"

int defender(sfRenderWindow *window, char *path)
{
    enemy *enemies = NULL;
    int choice;
    while (sfRenderWindow_isOpen(window)) {
        choice = main_screen(window);
        if (choice == 1) {
            create_map(&enemies, get_map(path));
            game_loop(window, enemies, path);
        }
        if (choice == 2)
            tutorial(window);
    }
}