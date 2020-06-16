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
	char az = 'a';
	char AZ = 'A';

	for (az = 'a'; az <= 'z'; az++)
		putchar(az);
	for (AZ = 'A'; AZ <= 'Z'; AZ++)
		putchar(AZ);
		putchar('\n');
	return (0);
}
