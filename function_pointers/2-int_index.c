#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - searches for an integer
 * @array: array of integers
 * @size: number of elements in the array
 * @cmp: pointer to the function to be used to compare values
 * Return: index of the first element for which the cmp function does not return 0
 * 
 */
int int_index(int *array, int size, int (*cmp)(int))
{
int i, r;
if (array == NULL || cmp == NULL)
return (-1);
if (size <= 0)
{
return (-1);
}
for (i = 0; i < size; i++)
{
r = cmp(array[i]);
if (r != 0)
{
return (i);
}
}
return (-1);
}

