#include "holberton.h"
/**
 * _strcpy - copie the string pointer to by src
 * @dest: string
 * @src: string
 * Return: String
 */
char *_strcpy(char *dest, char *src)
{
	int a = 0, b;

	while (src[a] != '\0')
		a++;
	for (b = 0; b <= a; b++)
		dest[b] = src[b];
	return (dest);
}
