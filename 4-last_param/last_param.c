#include <unistd.h>

/**
 * main - entry point
 * Description: takes a string and display the last param
 *
 * return: Always 0 (Success)
 */

int ft_strlen(char *str)
{
    int count;

    count = 0;
    while (str[count])
        count++;
    return (count);
}

int main(int ac, char **av)
{
    if (ac >= 2)
        write (1, av[ac - 1], ft_strlen(av[ac - 1]));
    write (1, "\n", 1);
    return (0);
}
