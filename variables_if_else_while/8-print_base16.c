#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - function
* Return: 0 is succes
*betty style doc for function main goes there
*/
int main(void)
{
int n;
char letters;

for (n = 0; n <= 9 ;n++)
putchar(n + '0');

for (letters = 'a'; letters <= 'f' ; letters++)
putchar(letters);

putchar('\n');

return (0);
}
