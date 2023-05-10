#include "main.h"
/**
  * factorial - Returns factorial of a given number
  * @n: Integer
  * Return: -1 if number is lower than 0, factorial if number is 0 or greater
  */
int factorial(int n)
{
	int fact = 1;

	if (n < 0)
	{
		return (-1);
	}
	if (n == 0 || n == 1)
	{
		return (1);
	}
	fact = n * factorial(n - 1);
	return (fact);
}
