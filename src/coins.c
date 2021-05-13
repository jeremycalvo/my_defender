/*
** EPITECH PROJECT, 2021
** coins.c
** File description:
** coins
*/

#include "my.h"

void coins(sfRenderWindow *win, int sc, sfText *sc_text)
{
    sfVector2f sc_pos = {1600, 950};
    char *sc_str = my_itoa(sc);

    sfText_setCharacterSize(sc_text, 75);
    sfText_setColor(sc_text, sfWhite);
    sfText_setString(sc_text, sc_str);
    sfText_setPosition(sc_text, sc_pos);
    sfRenderWindow_drawText(win, sc_text, NULL);
}

void fire_coins(sfRenderWindow *win, int sc, sfText *sc_text)
{
    sfVector2f sc_pos = {920, 950};

    sfText_setCharacterSize(sc_text, 75);
    (sc >= 500) ? (sfText_setColor(sc_text, sfWhite)) : 0;
    (sc < 500) ? (sfText_setColor(sc_text, sfRed)) : 0;
    sfText_setString(sc_text, "500");
    sfText_setPosition(sc_text, sc_pos);
    sfRenderWindow_drawText(win, sc_text, NULL);
}

void pois_coins(sfRenderWindow *win, int sc, sfText *sc_text)
{
    sfVector2f sc_pos = {625, 950};

    sfText_setCharacterSize(sc_text, 75);
    (sc >= 200) ? (sfText_setColor(sc_text, sfWhite)) : 0;
    (sc < 200) ? (sfText_setColor(sc_text, sfRed)) : 0;
    sfText_setString(sc_text, "200");
    sfText_setPosition(sc_text, sc_pos);
    sfRenderWindow_drawText(win, sc_text, NULL);
}

void snow_coins(sfRenderWindow *win, int sc, sfText *sc_text)
{
    sfVector2f sc_pos = {340, 950};

    sfText_setCharacterSize(sc_text, 75);
    (sc >= 100) ? (sfText_setColor(sc_text, sfWhite)) : 0;
    (sc < 100) ? (sfText_setColor(sc_text, sfRed)) : 0;
    sfText_setString(sc_text, "100");
    sfText_setPosition(sc_text, sc_pos);
    sfRenderWindow_drawText(win, sc_text, NULL);
}

void elec_coins(sfRenderWindow *win, int sc, sfText *sc_text)
{
    sfVector2f sc_pos = {50, 950};

    sfText_setCharacterSize(sc_text, 75);
    (sc >= 50) ? (sfText_setColor(sc_text, sfWhite)) : 0;
    (sc < 50) ? (sfText_setColor(sc_text, sfRed)) : 0;
    sfText_setString(sc_text, "50");
    sfText_setPosition(sc_text, sc_pos);
    sfRenderWindow_drawText(win, sc_text, NULL);
}