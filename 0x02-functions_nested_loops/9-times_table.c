#include "holberton.h"

/**
* times_table - check the code for Holberton School students.
*
* Return: void.
*/

void times_table(void)
{
	int i;
	int j;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			int x = i * j;

			if (x >= 10)
			{
				_putchar(' ');
				_putchar((x / 10) + '0');
				_putchar((x % 10) + '0');
				if (j != 9)
				{
				_putchar(',');
				}
			}
			else
			{
				if (x <= 9)
				{
				if (j != 0)
				{
					_putchar(' ');
					_putchar(' ');
				}
				_putchar(x + '0');
					if (j != 9)
					{
					_putchar(',');
					}

				}
			}
		}
		_putchar('\n');
	}
}
