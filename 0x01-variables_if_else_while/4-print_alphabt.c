#include <stdio.h>

/*
 * explicacao aqui*/int main(void)
{
char * line = "abcdfghijklmnroprstuvwxyz";
int i = 0, j;
 
for (i, j; line[i] != '\0'; ++i)
{
putchar(line[i]);
putchar('\n');
}
    
return 0;
}
