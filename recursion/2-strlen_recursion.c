#include "main.h"
/**
 * _strlen_recursion- ther is the char
 * @s: pointer to the char
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));
}
