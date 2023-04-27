#include "lists.h"
/**
 * add_node_end - function that adds a new node at the end of a list_t list
 *
 * @head: double pointer
 * @str: new input string
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *end = *head;
	unsigned int length = 0;

	while (str[length])
		length++;
	node = malloc(sizeof(list_t));
	if (!node)
	{
		return (NULL);
	}
	node->str = strdup(str);
	node->len = length;
	node->next = NULL;

	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	while (end->next)
	{
		end = end->next;
		end->next = node;
	}
	return (node);
}
