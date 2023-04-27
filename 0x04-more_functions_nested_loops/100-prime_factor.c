#include <math.h>
#include <stdio.h>
/**
  * main - Entry point
  * Return: Always 0 (Success)
  */
int main(void)
{
	long x, max;
	long number = 612852475143;
	double square = sqrt(number);

	for (x = 1; x <= square; x++)
	{
	if (number % x == 0)
	{
	max = number / x;
	}
	}
	printf("%ld\n", max);
	return (0);
}
