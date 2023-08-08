#include <unistd.h>

/**
 * main - entry point
 * Description: change the ASCII code of each letter by +13 or -13
 *
 * return: Always 0
 */

void ft_rot13(char *str)
{
    int count;

    count = 0;
    while (str[count])
    {
        if ((str[count] >= 'a' && str[count] <= 'n') || (str[count] >= 'A' && str[count] <= 'N'))
            str[count] += 13;
        else if ((str[count] >= 'm' && str[count] <= 'z') || (str[count] >= 'M' && str[count] <= 'Z'))
            str[count] -= 13;
        write (1, &str[count], 1);
        count++;
    }
    write (1, "\n", 1);
    return ;
}

int main(int ac, char **av)
{   
    int count = 1;

    if (ac >= 2)
    {
        while (count < ac)
        {
            ft_rot13(av[count]);
            count++;
        }
    }
    return (0);
}
