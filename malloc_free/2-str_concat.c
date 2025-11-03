#include "main.h"
#include <stdlib.h>

char *str_concat(char *s1, char *s2)
{

char *dup;
unsigned int i, j, len = 0, len2 = 0;

if (s1 == NULL)
s1 = "";
if (s2 == NULL)
s2 = "";

while (s1[len])
    len++;

while (s2[len2])
    len2++;

dup = malloc(sizeof(char) * (len + len2 + 1));
if (dup == NULL)
return (NULL);

for (i = 0; i < len; i++)
dup[i] = s1[i];

for (j = 0; j < len2; j++)
dup[i + j] = s2[j];


dup[i + j] = '\0';

return (dup);
}