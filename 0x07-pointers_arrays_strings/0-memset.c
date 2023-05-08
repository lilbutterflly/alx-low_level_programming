#include "main.h"
/**
  * _memset - Fills the memory with a constant byte
  * @s: Pointer
  * @b: Constant byte
  * @n: Number of bytes
  * Return: Pointer
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
