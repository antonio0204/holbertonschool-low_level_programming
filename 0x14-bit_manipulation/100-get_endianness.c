#include "holberton.h"
/**
 * get_endianness - check endianness
 *
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int i;
	char *c;

	i = 1;
	c = (char *)&i;
	return (*c);
}
