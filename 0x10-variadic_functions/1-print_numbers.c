#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - function that print nubers
 * @separator: char
 * @n: int
 *
 * Return: 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list operacion;
	unsigned int number;
	unsigned int i;

	va_start(operacion, n);

	for (i = 0; i < n; i++)
	{
		number = va_arg(operacion, int);

		if (i < (n - 1) && separator != NULL)
		{
			printf("%d%s", number, separator);
		}
		else
		{
			printf("%d", number);
		}
	}
	printf("\n");

	va_end(operacion);
}
