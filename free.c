#include "monty.h"
/**
 * _free - free memory
 * @h: stack
 * @linestr: line of the file
 * @amount: value
 * @argv1: argument 1
 * @file: file
 * Return: Nothing
 */
void _free(stack_t **h, char **linestr, char **amount
		, char **argv1, FILE **file)
{
	stack_t *temp;

	if (*h != NULL)
	{
		temp = (*h)->prev;
		free(*h);
		*h = temp;
	}
	free(temp);
	free(*linestr);
	free(*amount);
	free(*argv1);
	free(*file);
}
