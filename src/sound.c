/*
** EPITECH PROJECT, 2021
** sound.c
** File description:
** sound
*/

#include "my.h"

sfSound *select_sound_create(void)
{
    sfSoundBuffer *select_sb;
    sfSound *select_sound = sfSound_create();

    select_sb = sfSoundBuffer_createFromFile("assets/selection.ogg");
    sfSound_setBuffer(select_sound, select_sb);

    return (select_sound);
}

sfSound *hammer_sound_create(void)
{
    sfSoundBuffer *hammer_sb;
    sfSound *hammer_sound = sfSound_create();

    hammer_sb = sfSoundBuffer_createFromFile("assets/hammer.ogg");
    sfSound_setBuffer(hammer_sound, hammer_sb);

    return (hammer_sound);
}

sfSound *coins_sound_create(void)
{
    sfSoundBuffer *coins_sb;
    sfSound *coins_sound = sfSound_create();

    coins_sb = sfSoundBuffer_createFromFile("assets/coins.ogg");
    sfSound_setBuffer(coins_sound, coins_sb);

    return (coins_sound);
}

sfSound *go_sound_create(void)
{
    sfSoundBuffer *go_sb;
    sfSound *go_sound = sfSound_create();

    go_sb = sfSoundBuffer_createFromFile("assets/game_over.ogg");
    sfSound_setBuffer(go_sound, go_sb);
    sfSound_setVolume(go_sound, 200);

    return (go_sound);
}

sfSound *hurt_sound_create(void)
{
    sfSoundBuffer *hurt_sb;
    sfSound *hurt_sound = sfSound_create();

    hurt_sb = sfSoundBuffer_createFromFile("assets/hurt.ogg");
    sfSound_setBuffer(hurt_sound, hurt_sb);
    sfSound_setVolume(hurt_sound, 200);

    return (hurt_sound);
}