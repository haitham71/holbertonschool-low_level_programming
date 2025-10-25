#include "main.h"

/**
 * rev_string - reverses a string in place
 * @s: pointer to the string to be reversed
 */
void rev_string(char *s)
{
int i, len = 0;
char x;
while (s[len] != '\0')
len++;
for (i = 0; i < len / 2; i++)
{
x = s[i];
s[i] = s[len - i - 1];
s[len - i - 1] = x;
}
}
