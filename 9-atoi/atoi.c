/**
 * ft_atoi - converts a string to an interger 
 * @str: string to convert
 *
 * return: string to integer 
 */

int ft_isspace(char c)
{
    if (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\v')
        return (1);
    return (0);
}

int ft_atoi(const char *str)
{
    int count;
    int sign;
    int result;

    count = 0;
    sign = 1;
    result = 0;
    while (ft_isspace(str[count]))
        count++;
    if (str[count] == '-' || str[count] == '+')
    {
        if (str[count] == '-')
            sign = -sign;
        count++;
    }
    while (str[count] >= '0' && str[count] <= '9')
    {
        result = result * 10 + (str[count] - 48);
        count++;
    }
    return (result * sign);
}

// MAIN TO TEST THE CODE
#include <stdio.h>
#include <stdlib.h>
int main(int ac, char **av)
{
    for (int count = 1; count < ac; count++)
    {
        printf("%d\n", ft_atoi(av[count]));
        printf("%d\n", atoi(av[count]));
    }
    return (0);
}
