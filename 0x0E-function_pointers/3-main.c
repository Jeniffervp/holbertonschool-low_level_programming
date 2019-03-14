#include "3-calc.h"

/**
 *main - entri point.
 * @argc: is a counter.
 * @argv: is a argument.
 *
 * Return: 0.
 */

int main(int argc, char *argv[])
{
	int j;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((argv[2][1] != 0) || ((argv[2][0] != '+') && (argv[2][0] != '-') &&
				  (argv[2][0] != '*') && (argv[2][0] != '/') &&
				  (argv[2][0] != '%')))
	{
		printf("Error\n");
		exit(99);
	}
	if (((argv[2][0] == '/') || (argv[2][0] == '%')) && atoi(argv[3]) == 0)
	{
		printf("Error\n");
		exit(100);
	}

	j = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", j);

	return (0);
}
