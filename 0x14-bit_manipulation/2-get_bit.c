#include "holberton.h"
/**
 * get_bit - returns the value of a bit
 * @n: int
 * @index: unsigned int
 * Return: int or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	i = (1 << index);
	if (i == (n & i))
		return (1);
	return (0);
}
