#include "holberton.h"
/**
 * binary_to_uint - converts number
 * @b: pointer
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int a = 0;

	if (!b)
	return (0);

	i = 0;

	while (b[i] != '\0')
	{
		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}
	i++;
	}
	for (i = 0; b[i] != '\0'; i++)
	{

	a <<= 1;

	if (b[i] == '1')
	{
		a += 1;
	}
	}
	return (a);
}
