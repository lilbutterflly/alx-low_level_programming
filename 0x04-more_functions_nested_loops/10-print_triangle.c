#include "main.h"
/**
  * print_triangle - Prints a triangle
  * @size: Size of the triangle
  * Return: Void
  */
void print_triangle(int size)
{
	int i, j, t;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (i = 0; i < size; i++)
	{
	for (j = size - i; j > 1; j--)
	{
	_putchar(32);
	}
	for (t = 0; t <= i; t++)
	{
	_putchar(35);
	}
	_putchar('\n');
	}
	}
}
