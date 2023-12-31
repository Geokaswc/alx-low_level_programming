#include "lists.h"

/**
 * pop_listint - function that deletes the head node of linked list
 * @head: pointing to first element in the linked list
 *
 * Return: head node’s data or 0 if list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int num;

	if (!head || !*head)
		return (0);

	num = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (num);
}

