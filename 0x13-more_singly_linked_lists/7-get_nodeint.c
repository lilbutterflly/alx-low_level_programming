#include "lists.h"
#include <stdlib.h>
/**
  * get_nodeint_at_index - returns the nth node in a list
  * @head: head
  * @index: index of the node
  * Return: the nth node in a list
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp = head;

	while (temp && i < index)
	{
		temp = temp->next;
		i++;
	}
	return (temp ? temp : NULL);
}
