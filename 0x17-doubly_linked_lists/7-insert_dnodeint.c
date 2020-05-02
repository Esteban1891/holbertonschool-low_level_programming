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
	dlistint_t *new, *tpm;
	unsigned int i = 0;	

	if (!h)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	tmp = *h;
	while (i < (idx - 1))
	{
		if (temp == NULL)
			return (NULL);
		tmp = tmp->next;
		i++;
	}
	if (tmp->next == NULL)
	{
		return (add_dnodeint_end(h, n));
	}
	else
	{
		new = malloc(sizeof(dlistint_t));
		if (!new)
			return (NULL);
		new->n = n;
		new->next = tmp->next;
		new->next->prev = new;
		tmp->next = new;
		new->prev = tmp;
	}
	return (new);
}
