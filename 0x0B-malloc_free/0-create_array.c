#include "holberton.h"
#include <stdlib.h>
/**
* create_array - a function that creates an array of chars.
* @size: size of the array.
* @c: storaged char
* Return: pointer of an array of chars
*/
char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	if (size == 0)
		return (NULL);
	a = malloc(sizeof(c) * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; b < size; b++)
		a[b] = c;
	return (a);
}
