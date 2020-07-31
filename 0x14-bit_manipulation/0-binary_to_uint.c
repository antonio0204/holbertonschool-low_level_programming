#include "holberton.h"
/**
 * binary_to_uint - converts number
 * @b: pointer
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int c = 0;

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

	c <<= 1;

	if (b[i] == '1')
	{
		c += 1;
	}
	}
	return (c);
}
