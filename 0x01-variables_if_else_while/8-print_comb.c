#include <stdio.h>

/*
 * explicacao aqui*/int main(void)
{
int x;
int a = (',');
int b = (' ');
int c = ('9');
for (x = 0; x <= 8; x++)
{
putchar((x % 10) + '0');
putchar(a);
putchar(b);
}
putchar(c);
return (0);
}

