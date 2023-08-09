/**
 * main - entry point
 * Description: Computing operations of 2 operands
 *
 * return: Always 0 (Success)
 */

#include <stdio.h>
int ft_isspace(char c)
{
    if (c == ' ' || c == '\t' || c == '\n' || c == '\r' || c == '\v')
        return (1);
    return (0);
}

double  ft_atoi(const char *str)
{
    int count;
    int sign;
    double result;
    int div_count;
    int count1;
    int div;


    div = 1;
    div_count = 1;
    count = 0;
    count1 = 0;
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
    while ((str[count] >= '0' && str[count] <= '9') || str[count] == '.')
    {
        if (str[count] != '.')
            result = result * 10 + (str[count] - 48);
        else
        {   
           div = 10;
           count1 = count + 1;
           while (str[count1] >= '0' && str[count1] <= '9')
           {
               count1++;
               div_count++;
           }
           div_count--;
           for (int i = 1; i < div_count; i++)
               div = div * 10;
        }
        count++;
    }
    return ((result / (double)div) * sign);
}

#include <stdlib.h>

double ft_sum(double a, double b)
{
    return (a + b);
}

double ft_soubtract(double a, double b)
{
    return (a - b);
}

double ft_mult(double a, double b)
{
    return (a * b);
}

double ft_div(double a, double b)
{
    if (b != 0)
        return (a / b);
    else 
    {
        printf("Error: Cannot divise by zero");
        return (0);
    }
}

int main(int ac, char **av)
{
    double a, b, result;

    result = 1;
    if (ac == 4)
    {
      // string to double
      a = ft_atoi(av[1]);
      b = ft_atoi(av[3]);
      switch (av[2][0])
      {
        case '+':
            result = ft_sum(a, b);
            break ;
        case '-':
            result = ft_soubtract(a, b);
            break ;
        case '/':
            result = ft_div(a, b);
            break ;
        case 'x':
            result = ft_mult(a, b);
            break ;
        default:
            printf("Error: Invalid operator\n");
            return (1);
     }
    printf("%.2f\n", result);
    }
    else
        printf("Error: number of arguments is invalid (Enter only 2 arguments)");
   return (0);
}
