#include "lists.h"
/**
 * sum_listint -  function that returns the sum
 * of all the data (n) of a listint_t linked list.
 *
 * @head: First node of the list
 *
 * Return: Sum
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	temp = head;
	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}
	return (sum);
}
