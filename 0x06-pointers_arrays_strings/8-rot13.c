#include "holberton.h"
/**
 **rot13 - change all lowercase to upper
 *
 *@s: pointer array
 *
 *Return: return character succeed
 *
 */
char *rot13(char *s)
{
	int a;
	int b;
	int n = 0;
	char fi[] = "ABCDEFGHIJKLMabcdefghijklmNOPQRSTUVWXYZnopqrstuvwxyz";
	char fj[] = "NOPQRSTUVWXYZnopqrstuvwxyzABCDEFGHIJKLMabcdefghijklm";

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; fi[b] != '\0' && n == 0; b++)
		{
			if (s[a] == fi[b])
			{
				s[a] = fj[b];
				n = 1;
			}
		}
		n = 0;
	}
	return (s);
}
