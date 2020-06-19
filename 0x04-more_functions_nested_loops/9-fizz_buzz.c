#include <stdio.h>
/**
  *main - prints from 0 to 100
  *
  *Return: always zero
  */
int main(void)
{
	int tmp;

	for (tmp = 1; tmp <= 100; tmp++)
	{
		if (tmp % 3 == 0 && tmp % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
		{
			if (tmp % 3 == 0)
			{
				printf("Fizz");
			}
			else
			{
				if (tmp % 5 == 0)
				{
					printf("Buzz");
				}
				else
				{
					printf("%d", tmp);
				}
			}
		}
		if (tmp == 100)
		{
			break;
		}
		else
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
