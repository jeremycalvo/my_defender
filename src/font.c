/*
** EPITECH PROJECT, 2021
** font.c
** File description:
** font
*/

#include "my.h"

sfText *create_text(void)
{
    sfText *sc_text = sfText_create();
    sfFont *sc_font = sfFont_createFromFile("assets/font.ttf");
    sfText_setFont(sc_text, sc_font);
    return (sc_text);
}