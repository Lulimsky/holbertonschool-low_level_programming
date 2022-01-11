#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a doubly linked list
 * @head: double pointer to the list
 * @n: data to insert in the new node
 *
 * Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{ 
	dlistint_t *addTOnode, *temp = *head;

	addTOnode = malloc(sizeof(dlistint_t));
	if (!addTOnode)
		return (NULL);
	addTOnode->n = n;
	addTOnode->next = NULL;
	if (*head == NULL)
	{
		*head = addTOnode;
		addTOnode->prev = NULL;
		return (addTOnode);
	}
	else
	{
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = addTOnode;
		addTOnode->prev = temp;
	return (addTOnode);
	}
}
