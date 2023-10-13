#include "lists.h"

/**
 *add_dnodeint - adds a new head node to dlist
 *@head: address of the pointer to the current head node
 *@n: int field of new node 
 *
 * Return : address of the new node or NULL
 */
dlistint _t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t)), *node;

	if (!head || !new)
		return (new ? free(new), NULL : NULL);

	new->n = n;
	new->next = NULL;
	if (!*head)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		node = *head;
		while (node->next)
			node =node->next;

		node->next = new;
		new->prev = node;

	}
	return (new);

}
