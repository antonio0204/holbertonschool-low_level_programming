#include "holberton.h"
/**
  * print_diagonal - print the numbers from 0 to 9
  *@n : takes the integer given
  */
void print_diagonal(int n)
{
	int line = n;
	int tmp;
	int tmp2;
	int space = 32;
	int slash = 92;

	if (line <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (tmp = 0; tmp < line; tmp++)
		{
			for (tmp2 = 0; tmp2 < tmp; tmp2++)
			{
				_putchar(space);
			}
		_putchar(slash);
		_putchar('\n');
		}
	}
}
