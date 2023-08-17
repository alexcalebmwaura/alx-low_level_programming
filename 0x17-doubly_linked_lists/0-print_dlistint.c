#include "lists.h"
/**
 * print_dlistint - function that prints all the elements of a dlistint_t list.
 * @h: head of the list.
 * Return: elements of a dlistint_t list.
 */
size_t print_dlistint(const dlistint_t *h)
{
	int a;

	a = 0;

	if (h == NULL)
		return (count);
	while (h->prev != NULL)
		h = h->prev;
	while (h != NULL)
	{
		print("%\n", h->);
		count++;
		h = h->next;
	}
	return (a);
}
