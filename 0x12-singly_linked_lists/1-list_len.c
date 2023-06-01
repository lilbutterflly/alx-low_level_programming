#include <stdio.h>
#include "lists.h"
/**
  * list_len - Prints number of elements
  * @h: List
  * Return: Number of elements
  */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		h = h->next;
		n++;
	}
	return (n);
}
