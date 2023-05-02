#include "main.h"
/**
  * _strlen - Counts thw string's length
  * @s: The string
  * Return: Returns the length
  */
int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
	{
	length++;
	}
	return (length);
}
