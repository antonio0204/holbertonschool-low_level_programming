#include "holberton.h"
/**
 * _strchr - locates a character in a string
 * @s: string to check
 * @c: character to check for
 *
 * Return: pointer to spot in s with c or null
 */

char *_strchr(char *s, char c)
{
	int a = 0;

	while (*(s + a))
	{
		if (*(s + a) == c)
			return (s + a);
		a++;
	}
	if (*(s + a) == c)
		return (s + a);
	return (0);
}
