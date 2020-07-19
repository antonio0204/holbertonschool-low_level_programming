#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that print string
 * @separator: char
 * @n: string
 *
 * Return: 0
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list impresion;
	char *name;
	unsigned int i;

	va_start(impresion, n);

	for (i = 0; i < n; i++)
	{
		name = va_arg(impresion, char *);

		if (name == NULL)
		{
			name = "(nil)";
		}
		if (i < (n - 1) && separator != NULL)
		{
			printf("%d%s", name, separator);
		}
		else
		{
			printf("%d", name);
		}
	}
	printf("\n");

	va_end(impresion);
}
