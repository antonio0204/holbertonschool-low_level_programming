#include "holberton.h"
/**
 * leet - encodes a string into 1337
 * @s: string
 *
 * Return: pointer to a string
 */
char *leet(char *s)
{
	int a = 0, b;
	char l[] = "oOlLeEaAtT";
	char n[] = "0011334477";

	while (s[a] != '\0')
	{
		for (b = 0; l[b] != '\0'; b++)
		{
			if (s[a] == l[b])
				s[a] = n[b];
		}
		a++;
	}
	return (s);
}
