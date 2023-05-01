#include "lists.h"
/**
 * add_nodeint_end -  function that adds a new node
 * at the end of a listint_t list.
 *
 * @head: Head pointer of the stucture
 * @n: data value to be entered in the end node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *endnode;
	listint_t *temp;

	temp = *head;
	endnode = malloc(sizeof(listint_t));
	if (endnode == NULL)
	{
		return (NULL);
	}
	endnode->n = n;
	endnode->next = NULL;
	if (*head == NULL)
	{
		*head = endnode;
		return (endnode);
	}
	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = endnode;
	return (endnode);
}
