#include "holberton.h"
/**
 * rev_string - rev string
 * @s: integer
 *
 *
 */
void rev_string(char *s)
{
	int p, length;
	char a;

	length = 0;
	for (p = 0; s[p] != '\0'; p++)
		length++;

	for (p = 0; p < length; p++)
	{
		a = s[p];
		s[p] = s[length - 1];
		s[length - 1] = a;
		length--;
	}
}
