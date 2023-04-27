#include "main.h"
/**
  * print_square - Prints squares
  * @size: size of the square
  * Return: Void
  */
void print_square(int size)
{
	int i = 0, j;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	while (i < size)
	{
	for (j = 0; j < size; j++)
	{
	_putchar('#');
	}
	_putchar('\n');
	i++;
	}
	}
}
