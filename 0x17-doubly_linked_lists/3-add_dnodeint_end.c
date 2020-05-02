#include "lists.h"
/**
 * add_dnodeint_end - adds a new node
 * @head: head of node.
 * @n: data to be added.
 * Return: Head of the dlistint_t.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *aux, *head;



	if (new == NULL)
		return (NULL);
		new = malloc(sizeof(dlistint_t));
		head = *aux;

	if (!aux)
	{
		return (NULL);
		new->n = n;
		new->next = NULL;
	}
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
		return (new);
	}
	else
	{
		while (aux->next != NULL)
		{
			aux = aux->next;
		}
	}
	aux->next = new;
	new->prev = aux;
	return (aux);
}
