#include "lists.h"
/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 *
 * @head: double pointer
 * @str: string to be added
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	unsigned int length = 0;

	while (str[length])
	{
		length++;
	}

	newnode = malloc(sizeof(list_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->str = strdup(str);
	newnode->len = length;
	newnode->next = (*head);
	(*head) = newnode;

	return (*head);
}
