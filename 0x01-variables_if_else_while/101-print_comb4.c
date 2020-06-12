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
	int third;

	for (first = 48; first <= 57; first++)
	{
		for (second = first + 1; second <= 57; second++)
		{
			for (third = second + 1; third <= 57; third++)
			{
				putchar(first);
				putchar(second);
				putchar(third);
				if (first == '7' && second == '8' && third == '9')
				{
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
