#include "main.h"
/**
  * _strcmp - Compares two strings
  * @s1: String
  * @s2: String
  * Return: -15 or 15 if they are different, 0 if they are the same
  */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
