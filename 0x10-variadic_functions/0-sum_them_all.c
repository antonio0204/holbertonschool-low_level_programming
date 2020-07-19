#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - returns the sum of all its parameters.
 * @n: number of operation.
 * @...: opcional operation.
 *
 * Return: num1.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list operation;
	unsigned int add = 0, i;

	if (n == 0)
	{
		return (0);
	}
	va_start(operation, n);
	for (i = 0; i < n; i++)
	{
		add += va_arg(operation, int);
	}
	va_end(operation);
	return (add);
}
