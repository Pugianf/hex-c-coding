#include <stdio.h>

/*
 * explicacao aqui*/int main(void)
{
char c;
int x;
for (x = 0; x <= 9; x++)
{
putchar((x % 10) + '0');
printf(", ");
}
putchar('\n');
return (0);
}
