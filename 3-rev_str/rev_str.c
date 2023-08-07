#include <unistd.h>

/**
 * ft_revstr - reverse string in place
 * @str: string to reverse
 *
 * return: reversed string
 * Allowed function: none
 */

int ft_strlen(char *str)
{
    int count;

    count = 0;
    while (str[count])
        count++;
    return (count);
}

char *ft_revstr(char *str)
{
    int     count;
    int     len;
    char    temp;
    
    len = ft_strlen(str) -  1;
    count = 0;
    while (count < len)
    {
        temp = str[count];
        str[count++] = str[len];
        str[len--] =  temp;
    }
    return (str);
}

int main(int ac, char **av) // main to test the function not required
{
    if (ac >= 2)
    {
        for (int count = 1; count < ac; count++)
        {
            ft_revstr(av[count]);
            write (1, av[count], ft_strlen(av[count]));
            write (1, "\n", 1);
        }
    }
    return (0);
}
