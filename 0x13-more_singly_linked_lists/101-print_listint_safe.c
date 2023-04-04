#include "lists.h"


/**
 * check_cycle - checks if a singly linked list has a cycle in it
 * @list: pointer to the head of the list
*/



/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	int i;
	const listint_t *temp;
	
	if (head == NULL)
		return (98);
	temp = head;
	do
	{
		printf("[%p] %d\n",(void *) &temp, temp->n);
		temp = temp->next;
		i++;
	} while (temp != head);
	return (i);
	
}