#include <unistd.h>

int ft_isspace(char c)
{
    if (c == ' ' || c == '\t')
        return (1);
    return (0);
}

void    ft_lastword(char *str)
{
    int count;

    count = 0;
    while (str[count])
        count++;
    count -= 1;
    while (ft_isspace(str[count]))
        count--;
    while (!(ft_isspace(str[count])) && count > 0)
        count--;
    if (ft_isspace(str[count]) == 1)
        count++;
    while (!(ft_isspace(str[count])) && str[count])
    {
        write (1, &str[count], 1);
        count++;
    }
    return ;
}

int main(int ac, char **av)
{
    if (ac == 2)
        ft_lastword(av[1]);
    write (1, "\n", 1);
    return (0);
}
