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
char az;

for (letters = 'a'; letters <= 'z' ; letters++)
for (az = 'A'; az <= 'az' ; az++)
{
putchar(letters);
putchar(az);
}
putchar('\n');

return (0);
}
