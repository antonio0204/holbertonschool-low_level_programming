#include"holberton.h"
/**
 * _strncpy - function that copies a string
 * @src: pointer
 * @dest: pointer
 * @n: number of bytes
 * Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (src[a] != '\0' && a < n)
	{
		*(dest + a) = *(src + a);
		a++;
	}
	while (a < n)
	{
		*(dest + a) = '\0';
		a++;
	}
	return (dest);
}
