#include "monty.h"
/**
 * monty_pint - prints the value at the top of the stack.
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void monty_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(jud.file);
		free(jud.content);
		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
