#include "holberton.h"
/**
 * _atoi - convert string to int
 * @s: string
 * Return: int
 */
int _atoi(char *s)
{
	int a = 0, b, c, x = 0, i = 0;

	c = 0;

	while (s[a] != '\0')
		a++;
	for (b = 0; b < a; b++)
	{
		if (s[b] == '-' && i == 0)
			x++;
		if (s[b] <= '9' && s[b] >= '0')
		{
			i++;
			if (b <= a)
				c *= 10;
			c += (s[b] - '0');
		}
		if (s[b] == ';')
			break;
	}
	if (x % 2 != 0)
		c *= -1;
	return (c);
}
