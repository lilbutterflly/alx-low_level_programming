#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * add_nodeint - adds node in the beginning of a list
  * @head: Head of te list
  * @n: int
  * Return: Address of the new element
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if ((*head) == NULL)
		new->next = NULL;
	new->next = (*head);
	(*head) = new;
	return (new);
}
