#include "lists.h"
#include <stdio.h>
/**
  * print_listint - prints a list of int
  * @h: the list
  * Return: number of nodes
  */
size_t print_listint(const listint_t *h)
{
	int c = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
