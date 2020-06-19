
#include "holberton.h"
/**
  * print_triangle - print the numbers from 0 to 9
  *@size : takes the integer given
  *Return: Always zero
  */
void print_triangle(int size)
{
	int line = size;
	int tmp;
	int tmp2;
	int tmp3;
	int space = 32;
	int share = '#';

	if (line <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (tmp = 0; tmp < line; tmp++)
		{
			for (tmp2 = tmp + 1; tmp2 < line; tmp2++)
			{
				_putchar(space);
			}
			for (tmp3 = 0; tmp3 <= tmp; tmp3++)
			{
				_putchar(share);
			}
			_putchar('\n');
		}
	}
}
