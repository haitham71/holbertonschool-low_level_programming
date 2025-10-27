#include "main.h"
#include <stddef.h>
/**
 * *_strstr - searches a string for any of a set of bytes
 * @needle: string to scan
 * @haystack: string containing characters to match
 *
 * Return: pointer to the first occurrence in s of any byte in accept,
 * or NULL if no such byte is found
 */

char *_strstr(char *haystack, char *needle)
{
int i, j;
for (i = 0; haystack[i] != '\0'; i++)
{
for (j = 0; needle[j] == haystack[i]; j++)
{
if (haystack[i] == needle[j])
return (&haystack[i]);
}
}
return (NULL);
}


