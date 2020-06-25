#include"holberton.h"
/**
 * _strcat - function that concatinates two strings.
 * @dest: pointer
 * @src: pointer
 * Return: 0
 */
char *_strcat(char *dest, char *src)
{
	int a, b;

	b = 0;
	while (dest[b] != '\0')
		b++;
	a = 0;
	while (src[a] != '\0')
	{
		*(dest + b) = *(src + a);
		a++;
		b++;
	}
	return (dest);
}
