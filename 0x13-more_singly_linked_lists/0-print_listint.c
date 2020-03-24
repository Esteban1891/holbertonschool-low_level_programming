#include "lists.h"
/**
 * print_listint - print all of a listint_t list
 * @h: the list head of
 *
 * Return: number of nodes of list
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)

		return (0);

	while (h != NULL)
	{
		printf("%u\n", h->n);
		h = h->next;
		count++;
	}


	return (count);
}
