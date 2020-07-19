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
			printf("nil");
		}
		else if (i == (n - 1))
		{
			printf("%s", name);
		}
		else if (separator)
		{
			printf("%s%s", name, separator);
		}
		else
		{
			printf("%s\n", name);
		}
	}
	printf("\n");

	va_end(impresion);
}
