#include "holberton.h"

void space(int i);
void chara(int i);

void print_triangle(int size)
{
	int i = 1;

	if (size > 0)
	{
		for (;i <= size ;i++)
		{
			space(size - i);
			chara(i);
			_putchar('\n);
		}
	}
	else
	{
		_putchar('\n');
	}	
}

void space(int i)
{
	for (; i < size; i++)
	{
		_putchar(32);
	}
}

void chara(int i)
{
	int a = 0;

	for (; a < i; a++)
	{
		_putchar(35);
	} 
}
