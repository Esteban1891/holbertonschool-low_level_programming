#include "lists.h"
#include <stdio.h>

/**
 * print_list - prints all the elements of a list_t list
 * @h: head of the linked list
 * Return: the number of nodes
 */


size_t print_list(const list_t *h)
{
	const list_t *temp;
	unsigned int count;

	temp = h;
	for (count = 0; temp; count++)
	{
		printf("[%u] %s\n", temp->len, temp->str);
		temp = temp->next;
	}
	return (count);
}
