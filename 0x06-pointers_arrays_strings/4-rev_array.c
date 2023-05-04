#include "main.h"
/**
  * reverse_array - Reverses the content of an array
  * @a: Array
  * @n: Number of elements
  */
void reverse_array(int *a, int n)
{
	int i, t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}
