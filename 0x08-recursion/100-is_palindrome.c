#include "main.h"
/**
  * palind2 - Obtains length of a
  * @a: String
  * @l: Integer to count length
  * Return: On success 1
  * On error, -1 is returned, and errno is set appropriately
  */
int palind2(char *a, int l)
{
	if (*a == 0)
	{
		return (l - 1);
	}
	return (palind2(a + 1, l + 1));
}
/**
  * palind3 - Compares string vs string reverse
  * @a: String
  * @l: length
  * Return: On success 1
  * On error, -1 is returned, and errno is set appropriately
  */
int palind3(char *a, int l)
{
	if (*a != *(a + l))
	{
		return (0);
	}
	else if (*a == 0)
	{
		return (1);
	}
	return (palind3(a + 1, l - 2));
}
/**
  * is_palindrome - Checks if a string is palindrome
  * @s: String
  * Return: 1 if te string is palindrome, 0 if not
  */
int is_palindrome(char *s)
{
	int l;

	l = palind2(s, 0);
	return (palind3(s, l));
}
