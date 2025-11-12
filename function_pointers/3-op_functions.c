#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - adds two integers
 * op_sub - subtracts two integers
 * op_mul - multiplies two integers
 * op_div - divides two integers
 * op_mod - computes the remainder of the division of two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
return (a + b);
}

int op_sub(int a, int b)
{
return (a - b);
}

int op_mul(int a, int b)
{
return (a * b);
}
int op_div(int a, int b)
{
return (a / b);
}

int op_mod(int a, int b)
{
return (a % b);
}
