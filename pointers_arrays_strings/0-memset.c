#include "main.h"
/**
* _memset - fill a block of memory with a specific byte
 * @s: pointer to the memory area to be filled
 * @b: the byte value to set (interpreted as unsigned char)
 * @n: number of bytes to be set to the value
 * Return: pointer to the memory area @s.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}
return (s);

}

