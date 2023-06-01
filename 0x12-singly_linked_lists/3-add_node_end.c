#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
  * add_node_end - New node at the end
  * @head: List
  * @str: String
  * Return: New element
  */
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *new;
	list_t *ptr = *head;

	while (str[len])
		len++;
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	new->len = len;
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
