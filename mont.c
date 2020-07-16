#include "monty.h"
/**
 * main - principal function
 * @argc: amount arguments
 * @argv: arguments
 * Return: 0 if success
 */
int main(int argc, char **argv)
{
	char *arg1;

	if (argc != 2)
	{
		dprintf(STDERR_FILENO, "USAGE: monty file\n");
		_retexfail();
	}
	else
	{
		arg1 = strdup(argv[1]);
		_read(arg1);
		free(arg1);
	}
	return (EXIT_SUCCESS);
}
