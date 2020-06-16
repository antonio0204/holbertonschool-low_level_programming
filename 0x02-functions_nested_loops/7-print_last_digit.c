#include "holberton.h"

/**
   * print_last_digit - print last number
    *@last :takes the number that will be used
     * Return: last number
      */
int print_last_digit(int last)
{
	int num;

	num = last % 10;
	if (num < 0)
	{
		num = num * -1;
	}
	_putchar(num + '0');
	return (num);

}
