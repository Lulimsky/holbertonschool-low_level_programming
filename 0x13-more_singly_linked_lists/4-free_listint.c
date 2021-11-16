#include "lists.h"

/**
 * free_listint - function that frees a listinti_t list
 * @head: pointer to the start of the list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head->next;
		free(head);
		head = node;
	}
}
