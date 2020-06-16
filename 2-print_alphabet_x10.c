#include "holberton.h"

/**
* print_alphabet_x10 - printf alphabet.
*
* Return: Always 0.
*/

void print_alphabet_x10(void)
{
	char az = 'a';
	int repet = 1;

	for (repet = 1; repet <= 10; repet++)
	{
		for (az = 'a'; az <= 'z'; az++)
		{
			_putchar(az);
		}
	_putchar('\n');
	}

}
