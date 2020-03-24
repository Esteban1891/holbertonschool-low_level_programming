#include "lists.h"
/**
 * sum_listint - Sum all the integers in a  list
 * @head: of the list
 *
 * Return: sum of integers
 */
int sum_listint(listint_t *head)
{
	int sum;
	listint_t *tmp;

	if (head == NULL)
		return (0);

	sum = 0, tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
