#include "holberton.h"
/**
 * binary_to_uint - converts a binary
 * @b: pointer
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int c = 0;

	if (!b)
	return (0);

	a = 0;

	while (b[a] != '\0')
	{
		if (b[a] != '0' && b[a] != '1')
		{
			return (0);
		}
	a++;
	}
	for (a = 0; b[a] != '\0'; a++)
	{

	c <<= 1;

	if (b[a] == '1')
	{
		c += 1;
	}
	}
	return (c);
}
