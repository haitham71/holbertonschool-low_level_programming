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
char letters;

for (letters = 'a'; letters <= 'z' ; letters++)
{
putchar(letters);
}
putchar('\n');

return (0);
}
