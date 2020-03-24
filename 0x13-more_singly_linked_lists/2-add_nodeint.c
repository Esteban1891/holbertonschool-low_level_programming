#include "lists.h"

/**
 * add_nodeint - add new node
 * @head: of list
 * @n: int
 * Return: new node of list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *n;

	if (head == NULL)
		return (NULL);
	n = malloc(sizeof(listint_t));
	if (n == NULL)
	{
		free(n);
		return (n);
	}
	n->n = n;
	n->next = *head;
	*head = n;
	return (n);
}
