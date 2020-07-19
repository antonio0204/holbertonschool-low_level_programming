#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its paramet.
 * @n: number of arg.
 * @...: opcional arg.
 *
 * Return: add.
 */
int sum_them_all(const unsigned int n, ...)
{

	va_list sum;
	unsigned int add = 0, i;

	if (n == 0)
	{
		return (0);
	}

	va_start(sum, n);
	for (i = 0; i < n; i++)
	{
		add += va_arg(sum, int);
	}
	va_end(sum);
	return (add);
}
