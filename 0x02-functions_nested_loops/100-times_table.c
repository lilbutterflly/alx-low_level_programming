#include "main.h"
/**
  * print_times_table - Prints a number's times table
  * @n: The number's table
  * Return: Void
  */
void print_times_table(int n)
{
	int a, b, prod;

	if ((n >= 0) && (n <= 15))
	{
	for (a = 0; a <= n; a++)
	{
	_putchar('0');
	for (b = 1; b <= n; b++)
	{
	_putchar(',');
	_putchar(' ');
	prod = a * b;
	_putchar(prod + '0');
	}
	_putchar('\n');
	}
	}
}
