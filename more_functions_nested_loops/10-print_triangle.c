#include "main.h"
/**
 * print_triangle - prints a right-aligned triangle using '#'
 * @size: size of the triangle
 *
 * Return: nothing
 */

void print_triangle(int size)
{
int r, s, h;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (r = 1; r <= size; r++)
{
for (s = size - r; s > 0; s--)
{
_putchar(' ');
}
for (h = 1; h <= r; h++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
