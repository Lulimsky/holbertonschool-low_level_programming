#include "lists.h"
/**
 * add_dnodeint - adds a new node at the
 * beginning of a doubly linked lists.
 * @head: double pointer to the head
 * @n: data to insert in the added node
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *addnode;

	addnode = malloc(sizeof(dlistint_t));
	if (addnode == NULL)
		return (NULL);
	addnode->n = n;
	addnode->prev = NULL;
	addnode->next = *head;
	if (*head != NULL)
		(*head)->prev = addnode;
	*head = addnode;
	return (addnode);
}
