#include "main.h"

/**
 * puts_half - prints the second half of a string, followed by a new line
 * @str: pointer to the string to be printed
 *
 * Description:
 * This function prints the second half of a string. If the number
 * of characters in the string is even, it prints the last (length / 2)
 * characters. If the number of characters is odd, it prints the last
 * (length + 1) / 2 characters. A newline character is printed at the end.
 */
void puts_half(char *str)
{
int len = 0;
int start;


while (str[len] != '\0')
len++;

if (len % 2 == 0)
start = len / 2;
else
start = (len + 1) / 2;


while (str[start] != '\0')
{
_putchar(str[start]);
start++;
}

_putchar('\n');
}

