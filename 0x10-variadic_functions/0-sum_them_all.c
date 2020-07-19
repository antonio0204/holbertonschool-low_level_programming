#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - function that return sum
 * @n: unsigned int
 * @...: int
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list operacion;
	unsigned int num1 = 0;
	unsigned int i;

	if (n == 0)
	{
		return (0);
	}

	va_start(operacion, n);

	for (i = 0; i < n; i++)
	{
		num1 += va_arg(operacion, int);
	}

	va_end(operacion);

	return (num1);
}
