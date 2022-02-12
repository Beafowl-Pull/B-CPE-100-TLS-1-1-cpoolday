/*
** EPITECH PROJECT, 2021
** dir
** File description:
** UWU
*/

int tits_down (char **world, int j, int i, int island)
{
    if (world[i][j + 1] == 'X') {
        world[i][j + 1] = island;
        j++;
        go_tits_down(world, i, j, island);
    }
}

int tits_up (char **world, int j, int i, int island)
{
    world[i][j] = world[i][j - 1];
}

int tits_right (char **world, int j, int i, int island)
{
    world[i][j] = world[i + 1][j];
}

int tits_left(char **world, int j, int i, int island)
{
    world[i][j] = world[i - 1][j];
}