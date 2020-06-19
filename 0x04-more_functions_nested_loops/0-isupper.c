#include "holberton.h"
/**
*_isupper - detects if it's the case is Upper.
*@c : takes the number and evaluates it
*Return: 1 if upper , 0 if not
*/

int _isupper(int c)
{
	int mayus = c;
	int A = 65;
	int Z = 90;

	if (mayus >= A && mayus <= Z)
	{
		return (1);

	}
	else
	{
		return (0);

	}

}
