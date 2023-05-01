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
	if (h == NULL)
	{
		return (-1);
	}
	struct listint_t *ptr = h;

	while (ptr != NULL)
	{
		printf("%d\n", ptr->n);
		elements++;
		ptr = ptr->next
	}
}
