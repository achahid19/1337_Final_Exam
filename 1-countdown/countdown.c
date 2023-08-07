#include <unistd.h>

/**
 * main - entry point
 * ft_countdowm - display all digits in descending order
 *
 * return: Always 0.
 * Allowed functions: write
 */

void    ft_countdown(char digit)
{
    write (1, &digit, 1);
    if (digit > '0')
        ft_countdown(digit - 1);
    return ;
}

int main(void)
{
    ft_countdown('9');
    return (0);
}  
