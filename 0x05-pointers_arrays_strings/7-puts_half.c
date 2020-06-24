#include "holberton.h"
/**
 * puts_half - puts
 * @str: integer
*/
void puts_half(char *str)
{
	int m;

	for (m = 0; str[m] != '\0'; m++)
	{
		m = m + 1;
	}
	for (m = m / 2; str[m] != '\0'; m++)
	{
		_putchar(str[m]);
	}
	_putchar('\n');
}
