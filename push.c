#include "monty.h"
/**
 * monty_push - add node to the stack
 * @head: stack head
 * @counter: line_number
 * Return: no return
*/
void monty_push(stack_t **head, unsigned int counter)
{
	int n, j = 0, flag = 0;

	if (jud.arg)
	{
		if (jud.arg[0] == '-')
			j++;
		for (; jud.arg[j] != '\0'; j++)
		{
			if (jud.arg[j] > 57 || jud.arg[j] < 48)
				flag = 1; }
		if (flag == 1)
		{ fprintf(stderr, "L%d: usage: push integer\n", counter);
			fclose(jud.file);
			free(jud.content);
			free_stack(*head);
			exit(EXIT_FAILURE); }}
	else
	{ fprintf(stderr, "L%d: usage: push integer\n", counter);
		fclose(jud.file);
		free(jud.content);
		free_stack(*head);
		exit(EXIT_FAILURE); }
	n = atoi(jud.arg);
	if (jud.lifi == 0)
		addnode(head, n);
	else
		addqueue(head, n);
}

