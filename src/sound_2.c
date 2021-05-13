/*
** EPITECH PROJECT, 2021
** sound_2
** File description:
** sound_2
*/

#include "my.h"

sfSound *win_sound_create(void)
{
    sfSoundBuffer *win_sb;
    sfSound *win_sound = sfSound_create();

    win_sb = sfSoundBuffer_createFromFile("assets/victory.ogg");
    sfSound_setBuffer(win_sound, win_sb);
    sfSound_setVolume(win_sound, 50);

    return (win_sound);
}

sfSound *elec_sound_create(void)
{
    sfSoundBuffer *elec_sb;
    sfSound *elec_sound = sfSound_create();

    elec_sb = sfSoundBuffer_createFromFile("assets/elec.ogg");
    sfSound_setBuffer(elec_sound, elec_sb);

    return (elec_sound);
}