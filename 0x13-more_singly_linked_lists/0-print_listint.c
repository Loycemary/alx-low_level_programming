#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * const listint - A function that prints all the elements of a linked list
 * @h: pointer to const listint
 * Return: the number of nodes
 *
 */

size_t print_listint(const listint_t *h)

/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 */
typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

int main(void)

{ 
	print_elements(head);
	if (head == NULL)
		printf("%d\n", NULL);
	struct node *h = NULL;
	h = head;

	while (h != NULL)

	{	print("%d\n", h->elements);

		h = h->link;
	}

}
