#include "holberton.h"
/**
 * swap_int - swaps the value of two integers.
 * @a: int
 * @b: int
 *
 */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
}
