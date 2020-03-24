#include "lists.h"
/**
 * print_listint - print all of a listint_t list
 * @h: the list head of
 *
 * Return: number of nodes of list
 */
size_t print_listint(const listint_t *h)
{
	size_t count_nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%u] %s\n", h->len, h->str);

		count_nodes++;
		h = h->next;
	}

	return (count_nodes);
}
