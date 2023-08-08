#include <unistd.h>

/**
 * ft_strcpy - copy a string for src to dest
 * @s1: destination
 * @s2: source
 *
 * return: destination
 */

char *ft_strcpy(char *s1, char *s2)
{   
    int count;

    count = 0;
    while (*(s2 + count) != '\0')
    {
        *(s1 + count) = *(s2 + count);
        count++;
    }
    *(s1 + count) = '\0';
    return (s1);
}

#include <stdio.h> // MAIN TO TEST THE CODE, NOT REQUIRED
int main(void)
{
    char name[] = "anas";
    char cpy_name[5];

    ft_strcpy(cpy_name, name);
    printf("%s", cpy_name);
}
