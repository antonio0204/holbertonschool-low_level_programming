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
	int first;
	int second;

	for (first = 48; first <= 57; first++)
	{
		for (second = 48; second <= 57; second++)
		{
			putchar(first);
			putchar(second);
			if (first == '9' && second == '9')
			{
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);

}
