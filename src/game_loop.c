/*
** EPITECH PROJECT, 2021
** game_loop
** File description:
** Game functions
*/

#include "my.h"

void display_enemies(enemy **enemies, sfRenderWindow *window)
{
    enemy *tmp = *enemies;
    for (; tmp != NULL; tmp = tmp->next) {
        sfRenderWindow_drawSprite(window, tmp->sprite, NULL);
    }
}

void move_enemy(enemy **enemies)
{
    enemy *tmp = *enemies;
    sfVector2f pos;
    for (; tmp != NULL; tmp = tmp->next) {
        pos.x = tmp->speed;
        pos.y = 0;
        if (tmp->orientation == 'E')
            sfSprite_move(tmp->sprite, pos);
        pos.y = tmp->speed;
        pos.x = 0;
        if (tmp->orientation == 'S')
            sfSprite_move(tmp->sprite, pos);
        pos.y = tmp->speed * -1;
        if (tmp->orientation == 'N')
            sfSprite_move(tmp->sprite, pos);
    }
}

int orientation_enemy(enemy **enemies, int life_pt, int *coins, assets a)
{
    sfVector2f pos;
    for (enemy *tmp = *enemies; tmp != NULL; tmp = tmp->next) {
        pos = sfSprite_getPosition(tmp->sprite);
        animate(&tmp);
        if (pos.x >= 500 && tmp->move == 0)
            (tmp->orientation = 'S') && (tmp->move++);
        if (pos.y >= 480 && tmp->move == 1)
            (tmp->orientation = 'E') && (tmp->move++);
        if (pos.x >= 850 && tmp->move == 2)
            (tmp->orientation = 'S') && (tmp->move++);
        if (pos.y >= 715 && tmp->move == 3)
            (tmp->orientation = 'E') && (tmp->move++);
        if (pos.x >= 1220 && tmp->move == 4)
            (tmp->orientation = 'N') && (tmp->move++);
        if (pos.y <= 360 && tmp->move == 5)
            (tmp->orientation = 'E') && (tmp->move++);
            ORIENTATION_LAST_PART;
}

int game_loop(sfRenderWindow *window, enemy *enemies, char *path)
{
    GAME_LOOP_DEFINE;
    while (sfRenderWindow_isOpen(window) && end) {
        GAME_FIRST_PART;
        time = sfClock_getElapsedTime(clock);
        life_pt = orientation_enemy(&enemies, life_pt, &coins_nb, assets);
        (life_pt == 0) ? (game_over(window, path, assets)) : 0;
        (enemies == NULL) && (win_screen(window, path, assets));
        if (time.microseconds > 30000) {
            wait_attack(window, &tower, &enemies, assets);
            move_enemy(&enemies);
            enemy_debuffer(&enemies);
            coins_nb = increase_coins(coins_nb);
            sfClock_restart(clock);
        }
        sfRenderWindow_display(window);
    }
}