#include "lists.h"
#include <string.h>

/**
 * add_node - Adds a new node at the beginning
 *            of a list_t list.
 * @head: A pointer to the head of the  list.
 * @str: The string to be added to the  list.
 *
 * Return: If the function - NULL.
 *
 */

list_t *add_node(list_t **head, const char *str)
{
	char *i;
	int len;
	list_t *nodo;

	nodo = malloc(sizeof(list_t));
	if (nodo == NULL)
		return (NULL);

	i = strdup(str);
	if (i == NULL)
	{
		free(nodo);
		return (NULL);
	}

	for (len = 0; str[len];)
		len++;

	nodo->str = i;
	nodo->len = len;
	nodo->next = *head;

	*head = nodo;

	return (nodo);
}
