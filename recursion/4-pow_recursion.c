#include "main.h"
#include <math.h>
/**
 * _pow_recursion - returns the value of x raised to the power of y
 * @x: base number
 * @y: exponent
 * Return: x raised to y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
int i = pow(x, y);
if (y < 0)
{
return (-1);
}

return (1 + i);
}
