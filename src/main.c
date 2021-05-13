/*
** EPITECH PROJECT, 2020
** main
** File description:
** main
*/

#include "my.h"

void usage(void)
{
    my_putstr("\n =========================================================\n");
    my_putstr("| Welcome to my_defender                                  |\n");
    my_putstr("|                                                         |\n");
    my_putstr("| Launch game with ./my_defender map                      |\n");
    my_putstr("|                                                         |\n");
    my_putstr("| Map is made of '1', '2', '3', corresponding to the      |\n");
    my_putstr("| monsters that will spawn and 'V' corresponding to the   |\n");
    my_putstr("| end of the map.                                         |\n");
    my_putstr("|                                                         |\n");
    my_putstr("| Use mouse to interact with the game, and Escape to      |\n");
    my_putstr("| to enter pause menu                                     |\n");
    my_putstr(" =========================================================\n");
}

int main(int ac, char **av)
{
    sfRenderWindow *window;
    sfVideoMode mode = {1920, 1080, 32};
    sfMusic *anthem_music;
    if (ac != 2) {
        my_putstr("Try ./my_defender -h to learn how to launch the game\n");
        return (0);
    }
    if (ac == 2 && my_strcmp(av[1], "-h") == 0) {
        usage();
        return (0);
    }
    anthem_music = sfMusic_createFromFile("assets/anthem.ogg");
    sfMusic_setVolume(anthem_music, 6);
    sfMusic_setLoop(anthem_music, sfTrue);
    sfMusic_play(anthem_music);
    window = sfRenderWindow_create(mode, "Defender", sfFullscreen, NULL);
    sfRenderWindow_setFramerateLimit(window, 60);
    defender(window, av[1]);
}