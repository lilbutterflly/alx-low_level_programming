#include "main.h"
/**
  * print_last_digit - Prints the last digit
  * @c: the integer we should get the last digit from
  * Return: The value of the last digit
  */
int print_last_digit(int c)
{
	int n;

	n = c % 10;
	if (n < 0)
	{
	n *= -1;
	}
	_putchar(n + '0');
	return (n);
}
