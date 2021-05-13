/*
** EPITECH PROJECT, 2021
** effects.c
** File description:
** effects
*/

#include "my.h"

assets effects(sfRenderWindow *window, assets a)
{
    a = elec_effect(window, a);
    a = snow_effect(window, a);
    a = pois_effect(window, a);
    a = fire_effect(window, a);

    return (a);
}

assets elec_effect(sfRenderWindow *window, assets a)
{
    sfIntRect elec_rect;

    return (a);
}

assets snow_effect(sfRenderWindow *window, assets a)
{
    return (a);
}

assets pois_effect(sfRenderWindow *window, assets a)
{
    return (a);
}

assets fire_effect(sfRenderWindow *window, assets a)
{
    sfIntRect fire_rect;
    fire_rect.top = 0;
    fire_rect.left = 0;
    fire_rect.width = 128;
    fire_rect.height = 252;

    sfSprite_setTextureRect(a.fire_anim, fire_rect);
    sfRenderWindow_drawSprite(window, a.fire_anim, NULL);
    return (a);
}