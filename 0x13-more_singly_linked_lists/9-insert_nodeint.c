#include "lists.h"
/**
 * insert_nodeint_at_index - function that inserts a
 * new node at a given position.
 *
 * @head: first node of the list
 * @n: Interger
 * @idx: is the index of the list where the new node
 * should be added. Index starts at 0
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int a;
	listint_t *newnode;
	listint_t *temp = *head;

	newnode = malloc(sizeof(listint_t));
	if (!newnode || !head)
	{
		return (NULL);
	}
	newnode->n = n;
	newnode->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	for (a = 0; temp && a < idx; a++)
	{
		if (a == idx - 1)
		{
			newnode->next = temp->next;
			temp->next = newnode;
			return (newnode);
		}
		else
		{
			temp = temp->next;
		}
	}
	return (NULL);
}

