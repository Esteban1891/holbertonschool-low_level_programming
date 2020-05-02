#include "lists.h"
/**
 * sum_dlistint - funtion sum all data
 * @head: single list in
 * Return: sum all dato
 */
int sum_dlistint(dlistint_t *head)
{
	int sumatoria;

	for (sumatoria = 0; head != NULL;)
	{
		sumatoria += head->n;
		head = head->next;
	}
	return (sumatoria);
}
