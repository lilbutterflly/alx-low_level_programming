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
	int *p, j = 0, min1 = 0;

	if (min > max)
		return (NULL);
	p = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (p == NULL)
		return (NULL);
	for (j = 0; j < max; j++)
	{
		for (min1 = min; min1 <= max; min1++)
		{
			p[j] = min1;
		}
	}
	return (p);
}
