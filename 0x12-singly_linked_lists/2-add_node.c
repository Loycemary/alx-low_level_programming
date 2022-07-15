#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strlen - Function to return len of a string.
 * @str: str input
 * Return: Number of characters in string.
 */
int _strlen(const char *str)
{
	int i;

	if (str == NULL)
		return (0);
	for (i = 0; str[i] != '\0'; i++)
		;
	return (i);
}
/**
 * add_node - function that adds a new node at the begining of a linked list.
 * @head: the pointer to the linked list
 * @str: string to assign the new node.
 * Return: address of the new elements, or NULL if it failed.
 */

list_t *add_node(list_t **head, const char *str)

{
	list_t *new_node;

	if (head == NULL)
		return (NULL);
	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	new_node->str = strdup(str);
	new_node->len = _strlen(str);
	*head = new_node;
	return (*head);
}


