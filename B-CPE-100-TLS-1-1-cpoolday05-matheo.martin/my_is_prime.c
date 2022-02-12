/*
** EPITECH PROJECT, 2021
** my_is_prime
** File description:
** UwU
*/

int	my_compute_factorial_rec(int nb)
{
    int result;
    if (nb < 0 || nb > 12) {
        return (0);
    } else if (nb == 0) {
        return (1);
    } else {
        result = nb * my_compute_factorial_rec(nb - 1);
    }
    return (result);
}