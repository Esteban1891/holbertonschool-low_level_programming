#include "lists.h"

/**
 * pop_listint - function to remove the head node of a list
 * @head: pointer to the pointer of the list
 * Return: the value stored in the head node or 0
 */
int pop_listint(listint_t **head)
{
	int x;

	listint_t *cancel_node;
	listint_t *next_node;

	if (*head == NULL)
		return (0);

	cancel_node = *head;
	next_node = (*head)->next;

	x = cancel_node->n;
	*head = next_node;
	free(cancel_node);

	return (x);
}
