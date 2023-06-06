#include <stdlib.h>
#include "lists.h"
/**
  * free_listint - frees a list
  * @head: Head of the list
  * Return: Void
  */
void free_listint(listint_t *head)
{
	listint_t *ptr;

	while (head)
	{
		ptr = head->next;
		free(head);
		head = ptr;
	}
}
