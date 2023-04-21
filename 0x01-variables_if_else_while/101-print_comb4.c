#include <stdio.h>
/**
  * main - Entry point
  * Return: Always 0 (Success)
  */
int main(void)
{
	int i, j, t;

	for (i = '0'; i < '8'; i++)
	{

	for (j = i + 1; j < '9'; j++)
	{

	for (t = j + 1; t <= '9'; t++)
	{
	if (i != j && j != t && i != t)
	{
	putchar(i);
	putchar(j);
	putchar(t);
	if (i == '7' && j == '8' && t == '9')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
