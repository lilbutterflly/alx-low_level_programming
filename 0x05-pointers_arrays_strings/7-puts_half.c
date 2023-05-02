#include "main.h"
/**
  * puts_half - Prints half of a string
  * @s: String
  * Return: Void
  */
void puts_half(char *s)
{
	int j = 0;
	int k;

	while (s[j] != '\0')
	{
	j++;
	}
	if (j % 2 == 1)
	{
	k = (j - 1) / 2;
	k += 1;
	}
	else
	{
	k = j / 2;
	}
	for (; k < j; k++)
	{
	_putchar(s[k]);
	}
	_putchar('\n');
}
