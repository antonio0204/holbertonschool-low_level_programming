#include <stdio.h>
#include "holberton.h"
/**
 * print_array - print n element of an array of integers.
 * @a: array
 * @n: int
 *
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%i", a[b]);
		if (b != n - 1)
			printf(", ");
	}
	printf("\n");
}
