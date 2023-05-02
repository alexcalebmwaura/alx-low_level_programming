#include "lists.h"
/**
 * get_nodeint_at_index - function that returns
 * the nth node of a listint_t linked list.
 *
 * @head: First node of the lists
 * @index: Integer
 *
 * Return: NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int a = 0;
	listint *temp = head;

	while (temp && a < index)
	{
		temp = temp->next;
		a++;
	}
	return (temp ? temp : NULL);
}
