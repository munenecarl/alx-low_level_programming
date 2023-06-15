#include "lists.h"

/**
 * get_dnodeint_at_index - returns the nth node of a dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to return
 *
 * Return: nth node of a dlistint_t linked list, or NULL if the node does not
 * exist
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0, len = 0;

	if (head == NULL)
		return (NULL);

	len = dlistint_len(head);
	if (index > len - 1)
		return (NULL);

	while (count < index)
	{
		head = head->next;
		count++;
	}

	return (head);
}