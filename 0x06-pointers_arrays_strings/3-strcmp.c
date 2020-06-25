#include "holberton.h"
/**
 *_strcmp - concatenates two strings
 *
 *@s1: destination string
 *
 *@s2: source string
 *
 *Return: return a character
 */
int _strcmp(char *s1, char *s2)
{
	int a;
	int b;

	for (a = 0; s1[a] != '\0' && s2[a] != '\0'; a++)
	{
		if (s1[a] != s2[a])
		{
			b = s1[a] - s2[a];
			s1[a + 1] = '\0';
		}
		else
			b = 0;
	}
	return (b);
}
