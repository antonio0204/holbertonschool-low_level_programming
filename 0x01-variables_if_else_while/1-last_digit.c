#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * *main - Print the last digit and do an if evaluation
 * *
 * *Return: Always Zero
 *
 *
 */
int main(void)
{
int n;
int lastnumber;
srand(time(0));
n = rand() - RAND_MAX / 2;
lastnumber = n % 10;
if (lastnumber > 5)
printf("Last digit of %d is %d and is greater than 5\n", n, lastnumber);
else
if (lastnumber < 6 && lastnumber != 0)
printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastnumber);
else
printf("Last digit of %d is %d and is 0\n", n, lastnumber);
return (0);
}
