#include "main.h"
#include <stddef.h>
/**
 * _strchr - locate a character in a string
 * @s: pointer to the string to be searched
 * @c: character to locate
 *
 * Return: pointer to the first occurrence of @c in @s,
 * or NULL if the character is not found.
 */
char *_strchr(char *s, char c)
{
int i;

for (i = 0; s[i] != '\0'; i++)
{
if (s[i] == c)
return (&s[i]);
}

if (c == '\0')
return (&s[i]);

return (NULL);
}
