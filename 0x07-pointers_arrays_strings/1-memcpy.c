#include "main.h"
/**
  * _memcpy - Copies memory area
  * @dest: Memory area
  * @src: Memory area
  * @n: Number of bytes
  * Return: Pointer
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
