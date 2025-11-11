#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generate a printable password whose bytes sum to 2772
 *
 * Return: 0
 */
int main(void)
{
    int sum = 0;
    int r;
    char pwd[1000];
    int len = 0;
    int rem;

    srand((unsigned int)time(NULL));

    /* generate printable random chars while keeping space for final printable bytes */
    while (sum <= 2772 - 33) /* ensure at least one printable byte (>=33) can finish */
    {
        r = (rand() % (126 - 33 + 1)) + 33; /* 33..126 */
        if (sum + r > 2772 - 33)
            continue; /* لا نتجاوز الحد الذي يبقي لنا على الأقل 33 */
        pwd[len++] = (char)r;
        sum += r;
    }

    /* remaining sum to reach 2772 */
    rem = 2772 - sum;

    /* if remainder bigger than max printable, emit 126 repeatedly */
    while (rem > 126)
    {
        pwd[len++] = (char)126;
        rem -= 126;
    }

    /* now rem is between 33 and 126 (inclusive) */
    pwd[len++] = (char)rem;
    /* print the password (printable chars only) */
    for (r = 0; r < len; r++)
        putchar(pwd[r]);
    putchar('\n');

    return (0);
}

