#include "lists.h"
/**
 * print_list - function that prints all the elements of a list_t list.
 *
 * @h: pointer to the head
 *
 * Return: all the elements of a list_t list.
 */
size_t print_list(const list_t *h)
{
	size_t list = 0;

	while (h)
	{
		if (!h->str)
			printf("[0](nil)\n");
		else
			printf("[%u]%s\n", h->len, h->str);
		h = h->next;
		list++;
	}
	return (list);
}
