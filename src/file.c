/*
** EPITECH PROJECT, 2021
** file
** File description:
** Open file
*/

#include "my.h"

char *get_map(char *path)
{
    struct stat stats;
    char *str;
    int filedesc = open(path, O_RDONLY);
    if (filedesc < 0)
        return ("ERROR");
    stat(path, &stats);
    str = malloc(stats.st_size + 1);
    read(filedesc, str, stats.st_size);
    close(filedesc);
    return (str);
}