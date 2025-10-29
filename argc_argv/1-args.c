#include <stdio.h>

/**
 * main - Prints the number of arguments passed into the program.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 *
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
(void)argv; /* unused variable */
printf("%d\n", argc - 1);
return (0);
}
