#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: min int
 * @max: max int
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int *p;
	unsigned int a = 0;

	if (min > max)
		return (NULL);
	p = malloc((max - min + 1) * sizeof(*p));
	if (!p)
		return (NULL);
	while (min <= max)
	{
		p[a] = min;
		min++;
		a++;
	}
	return (p);
}
