#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint2 -frees a list_t list.
 * @head: Double pointer to the actual position of the linked list (struct)
 *
 * Return: Nothing.
 */
void free_listint2(listint_t **head)
{

listint_t *next_node;

if (head == NULL)
{
return;
}
while (*head != NULL)
{
next_node = (*head)->next;
free(*head);
*head = next_node;
}
}
