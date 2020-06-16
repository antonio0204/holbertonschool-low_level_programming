#include "holberton.h"

/**
* _isalpha - _isalpha
*
* @c: The character to print
* description found for function _isalpha _isalpha
* main - check the code for Holberton School students.
* Return: Always 0.
*/

int _isalpha(int c)
{
	if (c <= 'z' && c >= 'a')
		return (1);

	else if (c <= 'Z' && c >= 'A')
		return (1);
	else
		return (0);

}
