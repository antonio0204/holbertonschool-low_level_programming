#include "holberton.h"
/**
   * print_times_table - prints the n times table
    * @n: number of table
     * return: print table
      */
void print_times_table(int n)
{
	if ((n < 15) || (n < 0))
	{
		int t, i, p;

		for (i = 0; i <= n; i++)
		{
			for (t = 0; t <= n; t++)
			{
				p = (t * i);
				if (p > 9 && p < 100)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((p / 10) + '0');
					_putchar((p % 10) + '0');
				}
				else if (p <= 9 && t != 0)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(p + '0');
				}
				else if (p > 99)
				{
					_putchar(' ');
					_putchar((p / 100) + '0');
					_putchar(((p / 10) % 10) + '0');
					_putchar((p % 10) + '0');
				}
				else
				{
					_putchar(p + '0');
				}
				if (t != n)
					_putchar(',');
			}
			_putchar('\n');
		}
	}
}
