#include "holberton.h"
/**
  * more_numbers - print the numbers from 0 to 9
  *
  */
void more_numbers(void)
{

	int num;
	int repet;

	for (num = 0; num < 10; num++)
	{
		for (repet = 0; repet <= 14; repet++)
		{
			if (repet >= 10)
			{
				_putchar((repet / 10) + '0');
			}
		_putchar((repet % 10) + '0');
		}
	_putchar('\n');
	}
}
