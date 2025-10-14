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
int i;
for (i = 0; i <= 9 ; i++)
{
putchar(i + '0');
if (i != 9)
{
putchar(',');
putchar(' ');

}
}
putchar('\n');



return (0);
}
