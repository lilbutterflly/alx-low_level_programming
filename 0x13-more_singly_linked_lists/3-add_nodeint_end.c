#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * add_nodeint_end - adds a node in the end of a list
  * @head: head of the list
  * @n: int
  * Return: address of the new element
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *ptr = *head;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (ptr->next)
		ptr = ptr->next;
	ptr->next = new;
	return (new);
}
