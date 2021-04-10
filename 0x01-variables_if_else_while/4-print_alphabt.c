#include <stdio.h>

/*
 * explicacao aqui*/int main(void)
{
char c;
for (c >= 'a'; c <= 'z'; ++c)
{
while ((c >= 'a' && c <= 'd') && (c >= 'f' && c <= 'p') && (c >= 'r' && c <= 'z'))
{
putchar(c);
putchar('\n');
}
return (0);
}
