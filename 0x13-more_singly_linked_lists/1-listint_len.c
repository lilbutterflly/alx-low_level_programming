#include "lists.h"
#include <stdio.h>
/**
  * listint_len - prints number of elements
  * @h: list
  * Return: Number of elements
  */
size_t listint_len(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		c++;
		h = h->next;
	}
	return (c);
}
