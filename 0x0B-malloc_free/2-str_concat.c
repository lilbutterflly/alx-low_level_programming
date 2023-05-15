#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * str_concat - Concatenates two strings
  * @s1: string
  * @s2: string
  * Return: Concatenated string
  */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, j, k, l;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	l = i + j;
	s = malloc(l * sizeof(char) + 1);
	if (s == NULL)
	{
		return (NULL);
	}
	j = 0;
	while (k < l)
	{
		if (k <= i)
		{
			s[k] = s1[k];
		}
		if (k > i)
		{
			s[k] = s2[j];
			j++;
		}
		k++;
	}
	s[k] = '\0';
	return (s);
}
