#include "libmath.h"
#include <stdio.h>
/**
 *add-function add two integers
 *@a: intergers
 *@b: intergers
 *Return: sum
 */
int add(int a, int b)
{
return (a + b);
}
/**
 *sub- function return the difference between two integers
 *@a: intergers
 *@b: intergers
 *Return: the difference
 */
int sub(int a, int b)
{
return (a - b);
}
/**
 *mul-function multiply two integer
 *@a: intergers
 *@b: intergers
 *Return: result
 */
int mul(int a, int b)
{
return (a * b);
}
/**
 *div- device two integers
 *@a: intergers
 *@b: intergers
 *Return: result
 */
int div(int a, int b)
{
int c = 0;
if (b != 0)
c = a / b;
return (c);
}
/**
 *mod-modulus two integers
 *@a: intergers
 *@b: intergers
 *Return: result
 */
int mod(int a, int b)
{
int c = a % b;
if (b != 0)
c = a % b;
return (c);
}
