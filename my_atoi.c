/*
** EPITECH PROJECT, 2020
** libmy
** File description:
** my_atoi
*/

int my_atoi(char *av)
{
    int x = 0;
    int y = 1;
    int i = 0;

    if (av[i] == 45) {
        y--;
        i++;
    }
    while (av[i] != '\0') {
        x = x * 10 + av[i] - 48;
        i++;
    }
    return x * y;
}