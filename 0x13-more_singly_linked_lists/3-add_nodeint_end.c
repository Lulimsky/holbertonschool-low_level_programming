#include "lists.h"

/**
 * add_nodeint_end -  function that adds a new node
 * at the end of a listint_t list.
 *
 * @head: A pointer to the head of the listint_t list.
 * @n: a constant n integer.
 *
 * Return: a pointer to a last and new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *node, *tail;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	
	node -> n = n;
	node -> next = NULL;

	if (*head == NULL)
		*head = node;

	else
	{
		tail = *head;
		while (tail->next != NULL)
			tail = tail->next;
		tail->next = node;
	}

	return (*head);
}
