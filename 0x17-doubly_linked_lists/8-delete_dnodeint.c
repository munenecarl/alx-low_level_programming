#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index of a
 * dlistint_t linked list
 * @head: pointer to the head of the list
 * @index: index of the node to delete
 *
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0, len = 0;
	dlistint_t *temp = NULL;

	if (head == NULL || *head == NULL)
		return (-1);

	len = dlistint_len(*head);
	if (index > len - 1)
		return (-1);

	if (index == 0)
	{
		temp = *head;
		*head = (*head)->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(temp);
		return (1);
	}

	temp = *head;
	while (count < index)
	{
		temp = temp->next;
		count++;
	}

	if (temp->next == NULL)
	{
		temp->prev->next = NULL;
		free(temp);
		return (1);
	}

	temp->prev->next = temp->next;
	temp->next->prev = temp->prev;
	free(temp);

	return (1);
}