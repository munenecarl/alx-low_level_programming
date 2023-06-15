#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to the head of the list
 * @idx: index of the list where the new node should be added
 * @n: data to be added to the new node
 *
 * Return: address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *temp, *new;
	unsigned int count = 0, len = 0;

	if (h == NULL)
		return (NULL);

	len = dlistint_len(*h);
	if (idx > len)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	if (idx == len)
		return (add_dnodeint_end(h, n));

	temp = *h;
	while (count < idx)
	{
		temp = temp->next;
		count++;
	}

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = temp->prev;
	new->next = temp;
	temp->prev->next = new;
	temp->prev = new;

	return (new);
}