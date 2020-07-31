#include "holberton.h"
/**
 * _pow - calculates a ^ b
 * @a: base
 * @b: power
 * Return: int
 */
unsigned long int _pow(unsigned int a, unsigned int b)
{
	unsigned long int re;
	unsigned int i;

	re = 1;

	for (i = 1; i <= b; i++)
		re *= a;
	return (re);
}
/**
 * print_binary - prints a number in binary notation
 * @n: int
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int a;
	char f = 0;

	a = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (a != 0)
	{
		if ((n & a) == a)
		{
			f = 1;
			_putchar('1');
		}
		else if (f == 1 || a == 1)
			_putchar('0');
		a >>= 1;
	}
}
