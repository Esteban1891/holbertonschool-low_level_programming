#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: head of the linked list
 * Return: the number of nodes
 */


size_t print_list(const list_t *h)
{
	size_t contar;

	contar = 0;
	if(h == NULL)

	{
		printf("[0](nil)");


	}
	while (h !=  NULL)

	{
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		contar++;
	}
	return (contar);
}