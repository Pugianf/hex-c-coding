#include <stdio.h>

/*
 * explicacao aqui*/int main(void)
{
char *line = "abcdfghijklmnoprstuvwxyz";
int i = 0, j;
for (i = 0, j; line[i] != '\0'; ++i)
{
putchar(line[i]);
}
putchar('\n');
return (0);
}
