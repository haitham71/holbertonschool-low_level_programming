#include "main.h"

/**
* leet - encodes a string into 1337
* @s: string to encode
* Return: pointer to s
*/
char *leet(char *s)
{
char *letters = "aAeEoOtTlL";
char *leet_chars = "4433007711";
int i, j;

for (i = 0; s[i]; i++)
{
for (j = 0; letters[j]; j++)
{
if (s[i] == letters[j])
s[i] = leet_chars[j];
}
}
return (s);
}
