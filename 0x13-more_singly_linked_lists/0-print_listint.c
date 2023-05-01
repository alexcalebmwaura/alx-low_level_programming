#include "lists.h"
/**
 * print_listint - function that prints all the elements of a listint_t list
 *
 * @h: Head pointer of the structure
 *
 * Return: -1 else printed elements
 */
size_t print_listint(const listint_t *h)
{
	int elements = 0;

	if (h == NULL)
	{
		return (-1);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		elements++;
		h = h->next;
	}
	return (elements);
}
