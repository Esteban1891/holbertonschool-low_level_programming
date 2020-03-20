#include "lists.h"

/**
 * add_node_end -  adds a new node at the end of a list_t list.
 * @head: address to be added of str
 * @str: string to be added
 * Return: head
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node;
	list_t *temp;
	int leng = 0;

	node = malloc(sizeof(list_t));
	if (node == NULL)
		return (NULL);

	node->str = strdup(str);

	while (str[leng])
		leng++;

	temp = NULL;
	node->len = leng;/* lenght of the str*/
	node->next = NULL;

	if (*head != NULL)
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = node;
	}
	else
	{
		*head = node;
	}

	return (*head);
}
