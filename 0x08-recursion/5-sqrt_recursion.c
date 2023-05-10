#include "main.h"
/**
  * sqrt2 - Makes possible to evaluate from 1 to n
  * @a: Same number as n
  * @b: Number that iterates from 1 to n
  * Return: On success 1, on error, -1 is returned
  */
int sqrt2(int a, int b)
{
	if (b * b == a)
	{
		return (b);
	}
	else if (b * b > a)
	{
		return (-1);
	}
	return (sqrt2(a, b + 1));
}
/**
  * _sqrt_recursion - Returns the natural square root of a number
  * @n: Integer
  * Return: -1 if the number doesn't have a square root, results if it does
  */
int _sqrt_recursion(int n)
{
	return (sqrt2(n, 1));
}
