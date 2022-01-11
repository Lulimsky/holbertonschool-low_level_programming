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
	dlistint_t *addTOend, *temp = *head;

	addTOend = malloc(sizeof(dlistint_t));
	if (!addTOend)
		return (NULL);
	addTOend->n = n;
	addTOend->next = NULL;
	addTOend->prev = NULL;
	if (*head == NULL)
	{
		*head = addTOend;
		addTOend->prev = NULL;
		return (addTOend);
	}
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
		temp = temp->next;
		}
	temp->next = addTOend = temp;
	return (addTOend);
	}
}	
