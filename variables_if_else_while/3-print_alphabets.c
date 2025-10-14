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
putchar(letters);

for (az = 'A'; az <= 'Z' ; az++)
putchar(az);

putchar('\n');

return (0);
}
