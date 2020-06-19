#include "holberton.h"
/**
* _isdigit - detects if it's the case is Upper.
*
* @c : takes the number and evaluates it
*
* Return: 1 if upper , 0 if not
*/

int _isdigit(int c)
{
	int digit = c;

	int zero = 48;
	int nine = 57;

	if (digit >= zero && digit <= nine)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
