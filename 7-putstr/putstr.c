#include <unistd.h>

/**
 * ft_putstr - write a string on the std output
 * @str: string to write
 *
 * return : void
 */

int ft_strlen(char *str)
{
    int count;

    count = 0;
    while (str[count])
        count++;
    return (count);
}

void ft_putstr(char *str)
{
    write (1, str, ft_strlen(str));
}

int main(void) // MAIN TO TEST THE CODE
{
    char profession[] = "I'm a software engineer";

    ft_putstr(profession);
    return (0);
}
