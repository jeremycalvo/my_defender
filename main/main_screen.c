;/*
** EPITECH PROJECT, 2021
** main_screen
** File description:
** main_screen
*/
#include "my.h"

int main_screen(sfRenderWindow *window)
{
    main_define;
        if (is_clicked(p1_hg, p1_bd, window) == 1) {
            player_1(window, p1_sprite, p1_pos);
            (click == 0) ? (sfSound_play(select_sound)) : 0;
            click = 1;
        }
        if (is_clicked(p2_hg, p2_bd, window) == 1) {
            player_1(window, p2_sprite, p2_pos);
            (click == 0) ? (sfSound_play(select_sound)) : 0;
            click = 2;
        }
        if (is_clicked(p2_hg, p2_bd, window) == 0 \
        && is_clicked(p1_hg, p1_bd, window) == 0)
            click = 0;
        confirm = event_main(window);
        if (confirm == 1 || confirm == 2)
            return (confirm);
    }
    sfSound_destroy(select_sound);
    return (0);
}