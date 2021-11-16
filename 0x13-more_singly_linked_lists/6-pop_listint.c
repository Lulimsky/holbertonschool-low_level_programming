#include"lists.h"

/**
 * pop_listint - function that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 )*@head: a pointer to e node.
 * Return: data.
 */
int pop_listint(listint_t **head)
{
	listint_t *node;
	int data = 0;

	if (*head)
	{
		data = (*head)->n;
		node = *head;
		*head = (*head)->next;
		free(node);
	}
	else
	{
		return (0);

	}
	return (data);
}
