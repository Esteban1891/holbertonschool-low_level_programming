#include "lists.h"
/**
 * insert_dnodeint_at_index - insert node in idx
 * @h: head of linked list
 * @idx: index
 * @n: data to inset
 * Return: node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *tmp, *new;
	unsigned int i = 0;

	if (!h)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);
	tmp = *h;
	if (!idx)
	{
		new->n = n;
		new->next = tmp;
		new->prev = NULL;
		*h = new;
		return (new);
	}
	else if (idx != 1)
	{
		while (i < (idx - 1))
		{
			tmp = tmp->next;
			i++;
			if (!tmp)
				return (NULL);
		}
	}
	new->n = n;
	new->next = tmp->next;
	new->prev = tmp;
	if (tmp->next)
		(tmp->next)->prev = new;
	tmp->next = new;
	return (new);
}
