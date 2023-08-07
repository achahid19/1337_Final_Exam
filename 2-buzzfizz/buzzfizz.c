#include <unistd.h>

/**
 * main - entry point
 * ft_buzzfizz - buzz if nb is % 4 and fizz if nb is % 7
 *
 * return: Alawys 0.
 * Allowed function: write
 */

void    ft_putnbr(int   nb)
{
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    if (nb < 10)
    {
        nb += 48;
        write (1, &nb, 1);
    }
}

void    ft_buzzfizz(void)
{
    int nb;

    nb = 1;
    while (nb <= 100)
    {
        if (nb % 4 == 0)
            write (1, "buzz", 4);
        if (nb % 7 == 0)
            write (1, "fizz", 4);
        else if (nb % 4 != 0 && nb % 7 != 0)
            ft_putnbr(nb);
        write (1, "\n", 1);
        nb++;
    }
    return ;
}

int main(void)
{
    ft_buzzfizz();
    return (0);
}
