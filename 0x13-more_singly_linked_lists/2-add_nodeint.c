#include "lists.h"
#include <stdio.h>

/**
 * add_nodeint-adds nodes to list
 * @head:double head pointer to next node
 *Return:the address of the new element, or NULL if it failed
 *@n:integer
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;

	if (head == NULL)
		return (NULL);
	ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
		return (NULL);
	ptr ->n = n;
	ptr ->next = *head;
	*head = ptr;
	return (ptr);
}
