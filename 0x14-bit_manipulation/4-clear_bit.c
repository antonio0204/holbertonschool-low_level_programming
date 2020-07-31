#include "holberton.h"
/**
 * clear_bit - set the value of a bi
 * @n: int
 * @index: unsigned int
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	*n = *n & ~(unsigned long int)(1 << index);
	return (1);
}
