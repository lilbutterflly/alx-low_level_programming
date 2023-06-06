#include <stdlib.h>
#include "lists.h"
/**
  * pop_listint - deletes head
  * @head: Head
  * Return: Head's data
  */
int pop_listint(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
		return (0);
	ptr = (*head)->next;
	free(*head);
	(*head) = ptr;
	return ((*head)->n);
}
