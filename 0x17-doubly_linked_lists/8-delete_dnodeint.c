#include "lists.h"
/**
 * delete_dnodeint_at_index - inset node delete node for print
 * @head:head linked of list
 * @index: index
 *
 * Return: -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp, *tmp2;
	unsigned int i = 0;

	tmp = *head;
	if (!*head || !head)
		return (-1);

	if (!index)
	{
		if (tmp->next)
			tmp->next->prev = NULL;
		*head = tmp->next;
		free(tmp);
		return (1);
	}
	while (i < (index - 1))
	{
		tmp = tmp->next;
		i++;
		if (!tmp)
			return (-1);
	}
	tmp2 = tmp->next->next;
	free(tmp->next);
	tmp->next = tmp2;
	tmp2->prev = tmp;
	return (1);
}
