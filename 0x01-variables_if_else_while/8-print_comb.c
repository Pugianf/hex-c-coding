#include <stdio.h>

/*
 * explicacao aqui*/int main(void)
{
int x;
int a = (',');
int b = (' ');
for (x = 0; x <= 9; x++)
{
putchar((x % 10) + '0');
if (x != 9)
{
putchar(a);
putchar(b);
}
else
{
putchar('\n');
}
}
return (0);
}
