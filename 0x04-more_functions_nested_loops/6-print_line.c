#include "holberton.h"
/**
  * print_line - print the numbers from 0 to 9
  *@n : takes the integer given
  */
void print_line(int n)
{
	int line = n;
	int num;
	int underscore = 95;

	for (num = 0; num < line; num++)
	{
		_putchar(underscore);
	}
	_putchar('\n');
}
