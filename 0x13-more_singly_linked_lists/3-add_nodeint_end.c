#include "lists.h"

/**
 * add_nodeint_end - add node at the end
 * @head: head of list
 * @n: int
 * Return: the last node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *finish;
	listint_t *temp;

	if (head == NULL)
		return (NULL);
	finish = malloc(sizeof(listint_t));
	if (finish == NULL)
	{
		free(finish);
		return (NULL);
	}
	finish->n = n;
	finish->next = NULL;
	temp = *head;
	if (temp == NULL)
		*head = finish;
	if (temp != NULL)
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = finish;
	}
	return (finish);
}
