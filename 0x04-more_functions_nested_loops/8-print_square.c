#include "holberton.h"
/**
  * print_square - print the numbers from 0 to 9
  *@size : takes the integer given
  */
void print_square(int size)
{
	int num;
	int num2;
	int shared = 35;

	if (size > 0)
	{
		for (num = 0; num < size; num++)
		{
			for (num2 = 0; num2 < size; num2++)
			{
				_putchar(shared);
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
