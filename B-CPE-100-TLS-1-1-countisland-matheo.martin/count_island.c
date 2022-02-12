/*
** EPITECH PROJECT, 2021
** count_island.c
** File description:
** UwU
*/

int my_str_len(char **world)
{
    int i = 0;
    int len = 0;
    world[i][0];
    while (world[i][0] != '\0'){
        i++;
    }
    return (i);
}

int find_island (char **world, int i, int j, int island)
{
    if (world[i][j] == 'X') {
        i++;
        world[i][j] = '1';
        if (world[i][j] == 'X') {
            count_island_direction;
        }
        island++;
    }
    if (world[i][j] != 'X' && world[i][j] != '\0') {
        i++;
    }
    if (world[i][j] == '\0') {
        j++;
    }
    return (0);
}