#include "main.h"
/**
  * more_numbers - Prints numbers from 0 to 14 ten times
  * Return: Void
  */
void more_numbers(void)
{
	int i = 0, j;

	while (i < 10)
	{
	for (j = 0; j <= 14; j++)
	{
	if (j > 9)
	{
	_putchar((j / 10) + '0');
	}
	_putchar((j % 10) + '0');
	}
	i++;
	_putchar('\n');
	}
}
