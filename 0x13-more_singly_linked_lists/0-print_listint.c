#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


/**
 * print_listint-print elements of the lists
 * @h:name of linked lists
 *Return:number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != 0)
	{
		printf("%d\n", h->n);
		count++;

		h = h->next
	}
	return (count);
}
