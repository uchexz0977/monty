#include "monty.h"

/* addnode - adds new node to a stack
 * @head: A pointer to the top mode node of a stack_t linked list.
 * @n: The value to be stored in the new node.
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

