#include "main.h"
#include <stdlib.h>

int **alloc_grid(int width, int height)
{
int **p = malloc(sizeof(int *) * height);
int i, j;
if (width <= 0 || height <= 0 || p == NULL)
{
return (NULL);
}
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