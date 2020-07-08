#include "holberton.h"
#include <stdlib.h>
/**
* argstostr - functions concatenates all the arg..
* @ac: argument count.
* @av: argument vector.
* Return: pointer of an array of char
*/
char *argstostr(int ac, char **av)
{
	char *out;
	int a, b, c, d;

	if (ac == 0)
		return (NULL);
	for (a = b = 0; b < ac; b++)
	{
		if (av[b] == NULL)
			return (NULL);
		for (c = 0; av[b][c] != '\0'; c++)
			a++;
		a++;
	}
	out = malloc((a + 1) * sizeof(char));
	if (out == NULL)
	{
		free(out);
		return (NULL);
	}
	for (b = c = d = 0; d < a; c++, d++)
	{
		if (av[b][c] == '\0')
		{
			out[d] = '\n';
			b++;
			d++;
			c = 0;
		}
		if (d < a - 1)
			out[d] = av[b][c];
	}
	out[d] = '\0';
	return (out);
}
