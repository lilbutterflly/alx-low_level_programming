#include "main.h"
/**
  * prime2 - Makes possible to evaluate form 1 to n
  * @a: Same number as n
  * @b: Number that iterates from 1 to n
  * Return: On success 1
  * On error, -1 is returned, an errno is set approprietly
  */
int prime2(int a, int b)
{
	if (a == b)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}
	return (prime2(a, b + 1));
}
/**
  * is_prime_number - Detects prime numbers
  * @n: number
  * Return: 1 if the number is a prime number, else 0
  */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (prime2(n, 2));
}
