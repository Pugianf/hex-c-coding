#include "holberton.h"

/**
 * print_triangle - prints a triangle
 *
 * @b: number of # characteres
 */

void space(int a);
void chara(int b);

void print_triangle(int size)
{
	int i = 1;

	if (size > 0)
	{
		for (;i <= size ;i++)
		{
			space(size - i);
			chara(i);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}	
}

/**
 * space - prints the spaces needed for each line
 *
 * @a: integer number of spaces
 */

void space(int a)
{
	int i =0;

	for (; i < a; i++)
	{
		_putchar(32);
	}
}

/**
 * chara - prints the # character needed for each line
 *
 * @b - integer number of # characteres
 */

void chara(int b)
{
	int i = 0;

	for (; i < b; i++)
	{
		_putchar(35);
	} 
}
