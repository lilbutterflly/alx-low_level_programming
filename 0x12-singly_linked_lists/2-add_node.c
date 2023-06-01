#include <string.h>
#include <stdlib.h>
#include "lists.h"
#include <stdio.h>
/**
  * add_node - Adds a new node at the beginning
  * @head: The head of the node
  * @str: added
  * Return: New node
  */
list_t *add_node(list_t **head, const char *str)
{
	unsigned int len = 0;
	list_t *ptr;

	while (str[len])
		len++;
	ptr = malloc(sizeof(list_t));
	if (!ptr)
		return (NULL);
	ptr->str = strdup(str);
	ptr->len = len;
	ptr->next = (*head);
	(*head) = ptr;
	return (*head);
}
