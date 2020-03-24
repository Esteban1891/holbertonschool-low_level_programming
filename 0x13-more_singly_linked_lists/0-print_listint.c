#include "lists.h"
/**
 * print_listint - print all of a listint_t list
 * @h: the list head of
 *
 * Return: number of nodes of list
 */
size_t print_listint(const listint_t *h)
{
	size_t count;

	for (count = 0; h != NULL; count++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}

	return (count);
}
