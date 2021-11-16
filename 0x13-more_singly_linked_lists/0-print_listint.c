#include "lists.h"

/**
 * print_listint -  function that prints all the elements
 * of a listint list.
 * @h: pointer of a node.
 *
 * Return: length of the linked lists
 */
size_t print_listint(const listint_t *h)
{
	size_t nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes++;
	}
	return (nodes);
}
