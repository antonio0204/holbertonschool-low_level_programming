#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - Runs the file and if the n > 0 prints positive and
* n < 0 negative,else it will print 0
* Return: Always 0 (Success)
*/
int main(void)
{
	char onedigit = '0';

	for (onedigit = '0'; onedigit <= '9'; onedigit++)
	{
		putchar(onedigit);
	}
	putchar('\n');
	return (0);
}
