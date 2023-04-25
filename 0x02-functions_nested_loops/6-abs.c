#include "main.h"
/**
  * _abs - Counts the absolute value of an integer
  * @c: The integer to count
  * Return: The absolute value of a number or zero
  */
int _abs(int c)
{
	if (c < 0)
	{
	c *= -1;
	return (c);
	}
	return (c);
}
