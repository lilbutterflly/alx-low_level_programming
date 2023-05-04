#include "main.h"
/**
  * _strncpy - Copies a string
  * @dest: String
  * @src: String
  * @n: Dimension of dest
  * Return: A pointer resulting of dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
