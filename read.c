#include "monty.h"
/**
 * _read - function to read file
 * @arg1: argument 1
 */
void _read(char *arg1)
{
	size_t line = 0;
	ssize_t m;
	unsigned int nl = 1;
	char *linestr, *operator, *amount, *argv1, *oper;
	FILE *file;
	stack_t *h = NULL;

	argv1 = strdup(arg1);
	file = fopen(argv1, "r");
	if (file == NULL)
		_errfile(argv1);
	while ((m = getline(&linestr, &line, file)) != -1)
	{
		operator = strtok(linestr, " ");
		if (*operator == '\n')
		{
			nl++;
			continue;		}
		amount = strtok(NULL, " \n");
		if (strcmp(operator, "push") == 0 && amount != NULL)
		{
			h = _push(&h, &amount, nl);		}
		else
		{
			int j;
			instruction_t inst[] = {{"pall", _pall}, {"pint", _pint},
			{"pop", _pop}, {"swap", _s}, {"add", _a}, {"nop", _n},
			{"NULL", NULL}			};
			oper = strtok(operator, "\n ");
			for (j = 0; inst[j].opcode; j++)
			{
				if (strcmp(oper, inst[j].opcode) == 0)
				{
					inst[j].f(&h, nl);
					break;				}
				if (strncmp("NULL", inst[j] .opcode, 4) == 0)
					_errinst(nl, oper);		}}
		nl++;		}
	_free(&h, &linestr, &amount, &argv1, &file); }
