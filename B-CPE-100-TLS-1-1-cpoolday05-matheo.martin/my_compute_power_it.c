/*
** EPITECH PROJECT, 2021
** my_comput_power_it
** File description:
** UwU
*/

int my_compute_power_it(int nb, int p)
{
    int result;
    
    result = 1;
    if (p < 0) {
	    return (0);
    }
    while (p >= 1) {
	    result = result * nb;
	    p--;
    }
    return (result);
}