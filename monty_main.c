#include "monty.h"
#include <stdio.h>
/**
* main - monty code interpreter
* @argc: number of arguments
* @argv: monty file location
* Return: 0 on success
*/

#define MAX_LINE_LENGTH 1024 /* Define your maximum line length */

jud_t jud  = {NULL, NULL, NULL, 0};
int main(int argc, char *argv[])
{
char content[MAX_LINE_LENGTH];
FILE *file;
size_t size;
stack_t *stack = NULL;
unsigned int counter = 0;

if (argc != 2)
{
fprintf(stderr, "USAGE: monty file\n");
exit(1);
}

file = fopen(argv[1], "r");
if (!file)
{
fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
exit(1);
}

while (1)
{
if (fgets(content, MAX_LINE_LENGTH, file) == NULL)
break;

size = strlen(content);
if (size > 0 && content[size - 1] == '\n')
content[size - 1] = '\0'; /* Remove the newline character if present */

jud.content = content;
counter++;

execute(content, &stack, counter, file);
}

free_stack(stack);
fclose(file);

return (0);
}
