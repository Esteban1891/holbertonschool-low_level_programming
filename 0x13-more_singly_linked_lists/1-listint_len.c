#include "lists.h"

/**
 * listint_len - elements in a linked
 * @h: header
 * Return: number of elements in a list of linked linked_list
 */

size_t listint_len(const listint_t *h)
{
	size_t count;


	for (count = 0; h != NULL; count++)

	{
		h = h->next;
	}

	return (count);
}
