#include <stdio.h>
/**
* main -Entry point
* use of putchar to write characters specified by the argument
* Return: Always 0
*/
int main(void)
{
	char az = 'a';

	for ( ; az <= 'z'; az++)
	{
		if (az != 'e' && az != 'q')
			putchar(az);
	}
	putchar('\n');
	return (0);
}
