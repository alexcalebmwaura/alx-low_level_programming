#include "lists.h"
/**
 * add_nodeint - function that adds a new node
 * at the beginning of a listint_t list.
 *
 * @head: Head pointer of the structure
 * @n: Data value of the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *beginningnode = malloc(sizeof(listint_t));

	if (beginningnode == NULL)
	{
		return (NULL);
	}
	beginningnode->n = n;
	beginningnode->next = *head;
	*head = beginningnode;

	return (beginningnode);
}
