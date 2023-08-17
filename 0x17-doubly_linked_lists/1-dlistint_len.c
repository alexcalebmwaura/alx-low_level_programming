#include "lists.h"
/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list.
 * @h: head of the list.
 * Return: number of elements in a linked dlistint_t list.
 */
size_t dlistint_len(const dlistint_t *h)
{
	int a;

	a = 0;

	if (h == NULL)
		return (a);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);
}
