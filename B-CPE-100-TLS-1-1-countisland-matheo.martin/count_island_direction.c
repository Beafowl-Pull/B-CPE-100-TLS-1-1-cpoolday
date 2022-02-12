/*
** EPITECH PROJECT, 2021
** count island direction
** File description:
** functions for project count island
*/

void go_tits_up(char **world, int j, int i, int island)
{
    if (j > 0) {
        tits_up(world, j, i, island);
    }
    if (world[j][i + 1] != '\0') {
        tits_right(world, j, i, island);
    }
    if (i > 0) {
        tits_left(world, i, j, island);
    }
}

void go_tits_down(char **world, int j, int i, int island)
{
    if (world[j + 1][i] != '\0') {
        tits_down(world, j, i, island);
    }
    if (world[j][i + 1] != '\0') {
        tits_right(world, j, i, island);
    }
    if (i > 0) {
        tits_left(world, i, j, island);
    }
}

void go_tits_left(char **world, int j, int i, int island)
{
    if (i > 0) {
        tits_left(world, i, j, island);
    }
    if (world[j + 1][0] != '\0' ) {
        tits_down(world, j, i, island);
    }
    if (j > 0) {
        tits_up(world, j, i, island);
    }
}

void go_tits_right(char **world, int j, int i, int island)
{
    if (world[j][i + 1] != '\0') {
        tits_right(world, j, i, island);
    }
    if (world[j + 1][0] != '\0' ) {
        tits_down(world, j, i, island);
    }
    if (j > 0) {
        tits_up(world, j, i, island);
    }
}

void loop_found_island(char **world, int j, int i, int island)
{
    if (world[j][i + 1] == 'X') {
        world[j][i + 1] = island;
        i++;
        go_tits_right(world, j, i, island);
    }
    if (world[j + 1][i] == 'X') {
        world[j + 1][i] = island;
        j++;
        go_tits_down(world, j, i, island);
    }
}
