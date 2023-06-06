#include "lists.h"
#include <stdlib.h>
/**
  * sum_listint - sum of all data
  * @head: head
  * Return: the sum
  */
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *ptr = head;

	if (!head)
		return (0);
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
