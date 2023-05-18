#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * array_range - Creates an array of integers
  * @min: Minimum
  * @max: Maximum
  * Return: Pointer
  */
int *array_range(int min, int max)
{
	int *p, i = 0;

	if (min > max)
		return (NULL);
	p = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (p == NULL)
		return (NULL);
	while (min <= max)
	{
		p[i] = min;
		min++;
		i++;
	}
	return (p);
}
