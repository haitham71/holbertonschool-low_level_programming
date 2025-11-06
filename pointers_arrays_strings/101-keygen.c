#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random valid password for 101-crackme
 *
 * Return: 0 on success
 */
int main(void)
{
    int sum = 0;
    int r;
    char c;

    srand((unsigned int) time(NULL));

    while (sum < 2772)
    {
        /* generate a random byte (0..127) */
        r = rand() % 128;
        if (sum + r > 2772)
            r = 2772 - sum;
        c = (char) r;
        putchar(c);
        sum += r;
    }
    putchar('\n');
    return (0);
}
