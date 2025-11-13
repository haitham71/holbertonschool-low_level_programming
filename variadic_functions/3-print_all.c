#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
unsigned int i = 0;
char *str;
char *sep = "";
va_list args;
int first = 1;  /* شرط واحد لمعرفة أول عنصر */

va_start(args, format);

while (format && format[i])
{
switch (format[i])
{
case 'c':
if (!first)
printf(", ");
printf("%c", va_arg(args, int));
first = 0;
break;
case 'i':
if (!first)
printf(", ");
printf("%d", va_arg(args, int));
first = 0;
break;
case 'f':
if (!first)
printf(", ");
printf("%f", va_arg(args, double));
first = 0;
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
str = "(nil)";
if (!first)
printf(", ");
printf("%s", str);
first = 0;
break;
}
i++;
}
printf("\n");
va_end(args);
}
