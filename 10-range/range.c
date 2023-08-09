#include <stdlib.h>

/**
 * ft_range - allocate a range of integers "consecutive values"
 * @start: the first value
 * @end: the last value
 *
 * return: a pointer to the first value
 * Allowed functions: malloc
 */

int ft_abs(int nb)
{
    if (nb < 0)
        return (-nb);
    return (nb);
}
#include <stdio.h>
int *ft_range(int start, int end)
{
    int count;
    int size;
    int *ptr;

    count = 0;
    size = ft_abs(end - start) + 1;
    ptr = (int *)malloc(size * sizeof(int));
    if (!ptr)
        return (0);
    if (size == 1)
    {
        ptr[count] = 0;
        return (ptr);
    }
    if (end > start)
    {
        while (count < size)
        {
            ptr[count] = start + count;
            count++;
        }
    }
    else if (end < start)
    {
        while (count < size)
        {
            ptr[count] = start - count;
            count++;
        }
    }
    return (ptr);
}

// MAIN TO TEST THE FUNCTION
#include <stdio.h>
int main(void)
{
    int *ptr;
    int min = 30;
    int max = 20;
    int size;

    size = ft_abs(max - min) + 1;
    ptr = ft_range(min, max);
    if (ptr)
    {
        for (int count = 0; count < size; count++)
            printf("%d, ", ptr[count]);
        free(ptr);
    }
    else 
        printf("Enable to allocate the memory");
    return (0);
}
