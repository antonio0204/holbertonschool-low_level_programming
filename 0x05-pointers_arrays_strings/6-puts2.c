#include "holberton.h"
/**
 * puts2 - puts2 *
 * @str: integer
 *
 *
 */
void puts2(char *str)
{
	int p;

	for (p = 0; str[p] != '\0'; p++)
	{
		if (p % 2 == 0)
		{
			_putchar(str[p]);
		}
	}
	_putchar('\n');
}
