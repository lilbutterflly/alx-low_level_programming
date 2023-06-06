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
	int num;

	if (!head || !*head)
		return (0);
	num = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	(*head) = ptr;
	return (num);
}
