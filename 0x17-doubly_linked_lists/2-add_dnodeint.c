#include "lists.h"
/**
 * add_dnodeint - add node of the  list
 * @head: head of the linked list
 * @n: data in new node
 * Return: new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *aux = *head;
	dlistint_t *new;

	if (head == NULL)
		
		new = malloc(sizeof(dlistint_t));
	*head = new;
	new->n = n;
	new->prev = NULL;

	if (aux == NULL)
		new->next = NULL;
	else
	{
		new->next = aux;
		aux->prev = *head;
		aux = NULL;
	}
	return (*head);
}
