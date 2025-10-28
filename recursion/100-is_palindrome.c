#include "main.h"

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: string to check
 * Return: 1 if palindrome, 0 otherwise
 */
int is_palindrome(char *s)
{
int length(char *str);
int check(char *str, int start, int end);

if (!s)
return (0);
return (check(s, 0, length(s) - 1));
}

/**
 * length - returns the length of a string
 * @str: string
 * Return: length
 */
int length(char *str)
{
if (*str == '\0')
return (0);
return (1 + length(str + 1));
}

/**
 * check - recursively checks palindrome
 * @str: string
 * @start: starting index
 * @end: ending index
 * Return: 1 if palindrome, 0 otherwise
 */
int check(char *str, int start, int end)
{
if (start >= end)
return (1);
if (str[start] != str[end])
return (0);
return (check(str, start + 1, end - 1));
}
