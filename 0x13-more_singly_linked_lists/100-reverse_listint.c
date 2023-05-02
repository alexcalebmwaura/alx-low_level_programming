#include "lists.h"
/**
 * reverse_listint - function that reverses a listint_t linked list.
 *
 * @head: First node of the list
 *
 * Return: listint_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *next;
	listint_t *previous;

	*next = NULL;
	*previous = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = previous;
		previous = *head;
		*head = next;
	}

	*head = previous;

	return (*head);
}
