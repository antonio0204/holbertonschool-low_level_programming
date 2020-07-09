#include "holberton.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: unsigned int
 * Return: pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *r = malloc(b);

	if (r == '\0')
		exit(98);
	return (r);
}
