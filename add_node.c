#include "monty.h"
/**
 * addnode - Adds a new node to the top of the stack
 * @head: A pointer to the pointer to the top node of the stack (or NULL)
 * @n: The integer value to be stored in the new node
 *
 * Description:
 * This function creates a new node, assigns the given integer value to it,
 * and adds it to the top of the stack. It updates the head pointer accordingly
 * and sets the new node as the top node of the stack.
 */

void addnode(stack_t **head, int n)
{
stack_t *new_node = (stack_t *)malloc(sizeof(stack_t));
if (new_node == NULL)
{
fprintf(stderr, "Memory allocation failed.\n");
exit(EXIT_FAILURE);
}

new_node->n = n;
new_node->next = *head;
new_node->prev = NULL;

if (*head != NULL)
{
(*head)->prev = new_node;
}

*head = new_node;

printf("Added %d to the stack.\n", n);
}

