/*
** EPITECH PROJECT, 2021
** increase_coins
** File description:
** coins
*/

#include "my.h"

int increase_coins(int coins)
{
    static int i = 0;
    if (i == 25)
        coins++;
    i++;
    if (i > 25)
        i = 0;
    return (coins);
}
