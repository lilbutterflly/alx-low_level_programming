#include "main.h"
/**
  * _isupper - Checks if the character is in uppercase
  * @c: The character to check
  * Return: 1 if the c is uppercase 0 for anything else
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
