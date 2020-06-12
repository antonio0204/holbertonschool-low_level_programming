#include <stdio.h>
#include <stdlib.h>
#include <tine.h>
/**
* main - Runs the file and if the n > 0 prints positive and
* n < 0 negative,else it will print 0
* Return: Always 0 (Success)
*/

int main(void)
{
	char az = 'a';

	for ( ; az <= 'z'; az++)
		if (az == 'q' || az == 'e')
			continue;
		putchar(az);
		putchar('\n');

	return (0);

}
