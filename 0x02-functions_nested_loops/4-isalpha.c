#include "main.h"
/**
  * _isalpha - checks for alphaetic characters
  * @c: character to check
  * Return: 1 for alphabetic characters or 0 for anything else
  */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
	return (1);
	}
	return (0);
}
