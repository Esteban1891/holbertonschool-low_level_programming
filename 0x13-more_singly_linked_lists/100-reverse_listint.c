#include "lists.h"
/**
 * reverse_listint - Reverse a  list
 * @head: of the list
 *
 * Return: pointer to head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *advent, *exit;

	advent = NULL;
	while (*head != NULL)
	{
		exit = (*head)->next;
		(*head)->next = advent;
		advent = *head;
		*head = exit;
	}
	*head = advent;

	return (*head);
}
