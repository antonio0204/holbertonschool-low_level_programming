#include "holberton.h"

/**
* _islower - check the code for Holberton School students.
*
* @c:integer
* Return: Always 0.
*/
int _islower(int c)
{


	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);


}
