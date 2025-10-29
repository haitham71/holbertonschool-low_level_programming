/* 0-whatsmyname.c */
#include <stdio.h>

int main(int argc, char *argv[])
{
(void)argc;
if (argv[0] != NULL)
printf("%s\n", argv[0]);
else
printf("\n");
return (0);
}
