#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: head of the linked list
 * Return: the number of nodes
 */


size_t print_list(const list_t *h)
{

	int count = 0;

	for (;h != NULL; h = h->next, count++)
	{

		if (h-> str == NULL)
		{
			printf("[0] (nil)\n");

		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);

		}
}
		return (count);
	}
