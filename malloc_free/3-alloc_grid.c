#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 * Return: pointer to the 2 dimensional array, or NULL on failure
 */
int **alloc_grid(int width, int height)
{
int **p = malloc(sizeof(int *) * height);
int i, j;

for (i = 0; i < height; i++)
{
p[i] = malloc(sizeof(int) * width);
if (p[i] == NULL)
{
for (j = 0; j < i; j++)
free(p[j]);
free(p);
return (NULL);
}
for (j = 0; j < width; j++)
p[i][j] = 0;
}
return (p);
}
