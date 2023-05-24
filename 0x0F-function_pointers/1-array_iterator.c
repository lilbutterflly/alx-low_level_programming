#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"
/**
  * array_iterator - prints an array
  * @array: array of int
  * @size: array's size
  * @action: funtion pointer
  * Return: Void
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
