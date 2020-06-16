#include "holberton.h"

/**
   * print_last_digit - print last number
    *@last :takes the number that will be used
     * Return: last number
      */
int print_last_digit(int last)
{
	last = last % 10;

	if (last < 0)
	{
		last = -1 * last;
		_putchar(last + '0');
		return (last);
	}
	else
	{
	_putchar(last + '0');
	return (last);
	}
}
