#include <stdio.h>

/*
 * explicacao aqui*/int main(void)
{
int x;
for (x = 0; x <= 9; x++)
{
putchar((x % 10) + '0');
printf(", ");
}
putchar('\n');
return (0);
}
