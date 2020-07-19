#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 * @format: list of argument types passed to the function
 *
 * Return: void
 */

void print_all(const char *const format, ...)
{
	va_list list;
	unsigned int d = 0;
	char *s;

	va_start(list, format);

	while (format && format[d])
	{
		switch (format[d++])
		{
		case 'c':
			printf("%c", va_arg(list, int));
			break;
		case 'i':
			printf("%d", va_arg(list, int));
			break;
		case 'f':
			printf("%f", va_arg(list, double));
			break;
		case 's':
			s = va_arg(list, char *);
			if (s == NULL)
			{
				s = "(nil)";
			}
			printf("%s", s);
		default:
			continue;
		}
		if (format[d])
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(list);
}
