#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string to be scanned
 * @accept: string containing the characters to match
 * Return: number of characters from the beginning of s found in accept.
 */
unsigned int _strspn(char *s, char *accept)
{
unsigned int i, j, c = 0;
int m;
for (i = 0; s[i] != '\0'; i++)
{
m = 0;
for (j = 0; accept[j] != '\0'; j++)
{

if (s[i] == accept[j])
{


m = 1;
break;
}
}
if (m == 0)
break;
c++;
}
return (c);
}
