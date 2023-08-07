#include <unistd.h>

/**
 * main - Entry point
 * description: Display 'a'
 *
 * return: Always 0
 * allowed function: write
 */

int main(int ac, char **argv)
{
    (void)ac;
    (void)argv;
    write (1, "a\n", 2);
    return (0);
}
