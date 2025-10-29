#include <stdio.h>
/**
 * main - Prints the name of the program followed by a new line.
 * @argc: The number of command-line arguments.
 * @argv: An array containing the command-line arguments.
 */
int main(int argc, char *argv[])
{
(void)argc;
if (argv[0] != NULL)
printf("%s\n", argv[0]);
else
printf("\n");
return (0);
}
