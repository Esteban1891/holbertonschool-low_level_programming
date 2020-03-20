#include "lists.h"

/**
 * add_node_end -  adds a new node a list_t or listt.
 * @head: address of str
 * @str: string to be added
 * Return: head of node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *count;
	int leng = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);

	while (str[leng])
		leng++;

	count = NULL;
	node->len = leng;
	node->next = NULL;

	if (*head != NULL)
	{
		count = *head;
		while (count->next != NULL)
		{
			count = count->next;
		}
		count->next = node;
	}
	else
	{
		*head = node;
	}

	return (*head);
}
